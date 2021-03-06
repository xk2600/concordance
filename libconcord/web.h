/*
 * vim:tw=80:ai:tabstop=4:softtabstop=4:shiftwidth=4:expandtab
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program; if not, write to the Free Software Foundation, Inc.,
 * 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
 *
 * (C) Copyright Kevin Timmerman 2007
 */

#ifndef WEB_H
#define WEB_H

#include "remote.h"

int GetTag(const char *find, uint8_t* data, uint32_t data_size, uint8_t *&found,
           string *s = NULL, bool find_attributes = false);

int GetAttribute(const char *find, string data, string *result);

int encode_ir_signal(uint32_t carrier_clock, uint32_t *ir_signal,
                     uint32_t ir_signal_length, string *learn_seq);

int Post(uint8_t *xml, uint32_t xml_size, const char *root, TRemoteInfo &ri,
         bool has_userid, bool add_cookiekeyval = false, bool z_post = false,
         string *learn_seq=NULL, string *learn_key=NULL);

#endif
