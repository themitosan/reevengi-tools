/*
	RE2 EMD structures

	Copyright (C) 2011	Patrice Mandin

	This program is free software; you can redistribute it and/or modify
	it under the terms of the GNU General Public License as published by
	the Free Software Foundation; either version 2 of the License, or
	(at your option) any later version.

	This program is distributed in the hope that it will be useful,
	but WITHOUT ANY WARRANTY; without even the implied warranty of
	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
	GNU General Public License for more details.

	You should have received a copy of the GNU General Public License
	along with this program; if not, write to the Free Software
	Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
*/

#ifndef EMD2_H
#define EMD2_H 1

#include <SDL.h>

#include "emd_common.h"

/*--- Structures ---*/

/* Directory */
typedef struct {
	Uint32	unknown;
	Uint32	animation0;
	Uint32	skeleton0;
	Uint32	animation1;
	Uint32	skeleton1;
	Uint32	animation2;
	Uint32	skeleton2;
	Uint32	model;
} emd2_directory_t;

/* Skeleton */
typedef struct {
	emd_vertex3_t	pos;
	emd_vertex3_t	speed;

	/* 12 bits values for angles following */
} emd2_skel_anim_t;

/* Animation */
typedef struct {
	Uint16	count;
	Uint16	offset;
} emd2_anim_header_t;

#endif /* EMD2_H */
