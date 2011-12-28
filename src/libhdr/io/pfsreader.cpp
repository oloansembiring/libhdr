/**
 * This file is a part of LibHDR package.
 * ---------------------------------------------------------------------- 
 * Copyright (C) 2011 Davide Anastasia
 * 
 *  This library is free software; you can redistribute it and/or
 *  modify it under the terms of the GNU Lesser General Public
 *  License as published by the Free Software Foundation; either
 *  version 2.1 of the License, or (at your option) any later version.
 *
 *  This library is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 *  Lesser General Public License for more details.
 *
 *  You should have received a copy of the GNU Lesser General Public
 *  License along with this library; if not, write to the Free Software
 *  Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 * ---------------------------------------------------------------------- 
 * 
 * @author Davide Anastasia <davideanastasia@users.sourceforge.net>
 *  Original work by Rafal Mantiuk, <mantiuk@mpi-sb.mpg.de> for PFSTOOLS
 *
 */

#include "libhdr/io/pfsreader.h"
#include "libhdr/io/ioexceptions.h"

#include <iostream>

namespace LibHDR
{
namespace IO
{


PFSReader::PFSReader()
{}

PFSReader::PFSReader(std::string _filename)
{}

PFSReader::~PFSReader()
{}

void PFSReader::open(std::string _filename)
{

}

//Frame* PFSReader::readFrame()
//{
//    return NULL;
//}
    
void PFSReader::close()
{

}

bool PFSReader::isOpen()
{
    return false;
}

    
} // namespace IO
} // namespace LibHDR
