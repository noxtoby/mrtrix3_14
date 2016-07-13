/*
 * Copyright (c) 2008-2016 the MRtrix3 contributors
 * 
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/
 * 
 * MRtrix is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * 
 * For more details, see www.mrtrix.org
 * 
 */
#include "dwi/directions/file.h"

namespace MR {
  namespace DWI { 
    namespace Directions {

      Eigen::MatrixXd load_cartesian (const std::string& filename) 
      {
        auto directions = load_matrix<> (filename);
        if (directions.cols() == 2) 
          directions = Math::SH::spherical2cartesian (directions);
        else {
          if (directions.cols() != 3)
            throw Exception ("unexpected number of columns for directions file \"" + filename + "\"");
          for (ssize_t n  = 0; n < directions.rows(); ++n) {
            auto norm = directions.row(n).norm();
            if (std::abs(default_type(1.0) - norm) > 1.0e-4)
              WARN ("directions file \"" + filename + "\" contains non-unit direction vectors");
            directions.row(n).array() *= norm ? default_type(1.0)/norm : default_type(0.0);
          }
        }
        return directions;
      }

    }
  }
}

