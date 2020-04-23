/*

	Copyright 2018 Michal Fratczak

	This file is part of habdec.

    habdec is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    habdec is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with habdec.  If not, see <https://www.gnu.org/licenses/>.
*/

#pragma once

#include <vector>
#include <memory>
#include "../ssdv/ssdv.h"

namespace habdec
{

class SSDV_wraper_t
{

public:
    SSDV_wraper_t();
    ~SSDV_wraper_t();
    bool push(const std::vector<char>& i_chars);

private:
    uint8_t*    jpeg;
	ssdv_t      ssdv;

    std::vector<uint8_t>    buff_;
    int packet_begin_ = -1;
};

}