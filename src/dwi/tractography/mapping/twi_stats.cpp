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



#include "dwi/tractography/mapping/twi_stats.h"


namespace MR {
namespace DWI {
namespace Tractography {
namespace Mapping {


const char* contrasts[] = { "tdi", "length", "invlength", "scalar_map", "scalar_map_count", "fod_amp", "curvature", 0 };
const char* voxel_statistics[] = { "sum", "min", "mean", "max", 0 };
const char* track_statistics[] = { "sum", "min", "mean", "max", "median", "mean_nonzero", "gaussian", "ends_min", "ends_mean", "ends_max", "ends_prod", 0 };


}
}
}
}



