/*
 * Copyright 2011 Free Software Foundation, Inc.
 * 
 * This file is part of GNU Radio
 * 
 * GNU Radio is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3, or (at your option)
 * any later version.
 * 
 * GNU Radio is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with GNU Radio; see the file COPYING.  If not, write to
 * the Free Software Foundation, Inc., 51 Franklin Street,
 * Boston, MA 02110-1301, USA.
 */
#ifndef INCLUDED_GR_BASIC_SUBTRACT_H
#define INCLUDED_GR_BASIC_SUBTRACT_H

#include <gr_basic_api.h>
#include <gr_sync_block.h>

enum subtract_type{
    SUBTRACT_FC64,
    SUBTRACT_F64,
    SUBTRACT_FC32,
    SUBTRACT_F32,
    SUBTRACT_SC64,
    SUBTRACT_S64,
    SUBTRACT_SC32,
    SUBTRACT_S32,
    SUBTRACT_SC16,
    SUBTRACT_S16,
    SUBTRACT_SC8,
    SUBTRACT_S8,
};

class GR_BASIC_API basic_subtract : virtual public gr_sync_block{
public:
    typedef boost::shared_ptr<basic_subtract> sptr;
};

GR_BASIC_API basic_subtract::sptr basic_make_subtract(
    subtract_type type, const size_t vlen = 1
);

#endif /* INCLUDED_GR_BASIC_SUBTRACT_H */
