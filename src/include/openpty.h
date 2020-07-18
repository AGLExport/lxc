/*
 * openpty: glibc implementation
 *
 * Copyright (C) 1998, 1999, 2004 Free Software Foundation, Inc.
 *
 * Authors:
 * Zack Weinberg <zack@rabi.phys.columbia.edu>, 1998.
 *
 *  This library is free software; you can redistribute it and/or
 *  modify it under the terms of the GNU Lesser General Public
 *  License as published by the Free Software Foundation; either
 *  version 2.1 of the License, or (at your option) any later version.

 *  This library is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 *  Lesser General Public License for more details.

 *  You should have received a copy of the GNU Lesser General Public
 *  License along with this library; if not, write to the Free Software
 *  Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
 */

#ifndef _OPENPTY_H
#define _OPENPTY_H

#include <termios.h>
#include <sys/ioctl.h>

/*
 * Create pseudo tty ptx pty pair with @__name and set terminal
 * attributes according to @__termp and @__winp and return handles for both
 * ends in @__aptx and @__apts.
 */
extern int openpty (int *__aptx, int *__apts, char *__name,
		    const struct termios *__termp,
		    const struct winsize *__winp);

#endif
