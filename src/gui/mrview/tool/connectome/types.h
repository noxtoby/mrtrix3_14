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

#ifndef __gui_mrview_tool_connectome_types_h__
#define __gui_mrview_tool_connectome_types_h__

#include "connectome/connectome.h"
#include "connectome/lut.h"

namespace MR
{
  namespace GUI
  {
    namespace MRView
    {
      namespace Tool
      {

      typedef MR::Connectome::node_t    node_t;
      typedef MR::Connectome::Node_info Node_info;
      typedef MR::Connectome::Node_map  Node_map;

      enum class node_visibility_t { ALL, NONE, DEGREE, CONNECTOME, VECTOR_FILE, MATRIX_FILE };
      enum class node_geometry_t   { SPHERE, CUBE, OVERLAY, MESH };
      enum class node_colour_t     { FIXED, RANDOM, FROM_LUT, CONNECTOME, VECTOR_FILE, MATRIX_FILE };
      enum class node_size_t       { FIXED, NODE_VOLUME, CONNECTOME, VECTOR_FILE, MATRIX_FILE };
      enum class node_alpha_t      { FIXED, CONNECTOME, VECTOR_FILE, MATRIX_FILE };

      enum class edge_visibility_t { ALL, NONE, VISIBLE_NODES, CONNECTOME, MATRIX_FILE };
      enum class edge_geometry_t   { LINE, CYLINDER, STREAMLINE, STREAMTUBE };
      enum class edge_colour_t     { FIXED, DIRECTION, CONNECTOME, MATRIX_FILE };
      enum class edge_size_t       { FIXED, CONNECTOME, MATRIX_FILE };
      enum class edge_alpha_t      { FIXED, CONNECTOME, MATRIX_FILE };

      }
    }
  }
}

#endif




