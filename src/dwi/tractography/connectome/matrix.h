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



#ifndef __dwi_tractography_connectome_matrix_h__
#define __dwi_tractography_connectome_matrix_h__

#include <set>
#include <vector>

#include "connectome/connectome.h"
#include "math/math.h"

#include "dwi/tractography/connectome/connectome.h"
#include "dwi/tractography/connectome/mapped_track.h"


namespace MR {
namespace DWI {
namespace Tractography {
namespace Connectome {




class Matrix
{

  public:
    Matrix (const node_t max_node_index, const bool vector_output = false) :
        data   (MR::Connectome::matrix_type::Zero (vector_output ? 1 : (max_node_index + 1), max_node_index + 1)),
        counts (MR::Connectome::matrix_type::Zero (vector_output ? 1 : (max_node_index + 1), max_node_index + 1)) { }

    bool operator() (const Mapped_track_nodepair&);
    bool operator() (const Mapped_track_nodelist&);

    void scale_by_streamline_count();
    void remove_unassigned();
    void zero_diagonal();

    void error_check (const std::set<node_t>&);

    void write (const std::string&) const;
    void write_assignments (const std::string&) const;

    bool is_vector() const { return (data.rows() == 1); }


  private:
    MR::Connectome::matrix_type data, counts;
    std::vector<NodePair> assignments_pairs;
    std::vector< std::vector<node_t> > assignments_lists;

};






}
}
}
}


#endif

