/*
# Copyright (c) 2022-2023 Murilo Marques Marinho
#
#    This file is part of sas_core.
#
#    sas_core is free software: you can redistribute it and/or modify
#    it under the terms of the GNU Lesser General Public License as published by
#    the Free Software Foundation, either version 3 of the License, or
#    (at your option) any later version.
#
#    sas_core is distributed in the hope that it will be useful,
#    but WITHOUT ANY WARRANTY; without even the implied warranty of
#    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
#    GNU Lesser General Public License for more details.
#
#    You should have received a copy of the GNU Lesser General Public License
#    along with sas_core.  If not, see <https://www.gnu.org/licenses/>.
#
# ################################################################
#
#   Author: Murilo M. Marinho, email: murilomarinho@ieee.org
#
# ################################################################*/
#include "sas_core/sas_object.hpp"

#include <iostream>

namespace sas
{

/**
 * @brief Object::_print_license_header A Copyright header to help enforce LGPLv3 compliance.
 *
 * If you modify this method in any shape or form, you have therefore made a derivative work of
 * this library, hence you must abide to the Copyleft side of the LGPLv3.
 */
void Object::_print_license_header(const std::string& class_name)
{
    std::cout << "************************************************************************" << std::endl;
    std::cout << class_name + "(c) Murilo M. Marinho (murilomarinho.info) 2016-2023 LGPLv3" << std::endl;
    std::cout << "************************************************************************" << std::endl;
}

Object::Object(const std::string &class_name)
{
    _print_license_header(class_name);
}


}
