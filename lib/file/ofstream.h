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

#ifndef __file_ofstream_h__
#define __file_ofstream_h__


#include <fstream>
#include <string>



namespace MR
{
  namespace File
  {


    //! open output files for writing, checking for pre-existing file if necessary
    /*! This class is intended to be used as a substitute for std::ofstream.
     * It ensures that if the user has not given the command permission to overwrite
     * output files, the presence of an existing file is first checked. It also removes the
     * necessity to explicitly convert a path expressed as a std::string to a
     * c-style string. */
    class OFStream : public std::ofstream
    {
      public:
        OFStream() { }
        OFStream (const std::string& path, const std::ios_base::openmode mode = std::ios_base::out) {
          open (path, mode);
        }

        void open (const std::string& path, const std::ios_base::openmode mode = std::ios_base::out);

    };


  }
}

#endif


