/*
*   Copyright (C) 2016,2017,2018,2020 by Jonathan Naylor G4KLX
*
*   This program is free software; you can redistribute it and/or modify
*   it under the terms of the GNU General Public License as published by
*   the Free Software Foundation; either version 2 of the License, or
*   (at your option) any later version.
*
*   This program is distributed in the hope that it will be useful,
*   but WITHOUT ANY WARRANTY; without even the implied warranty of
*   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
*   GNU General Public License for more details.
*
*   You should have received a copy of the GNU General Public License
*   along with this program; if not, write to the Free Software
*   Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
*/

#if !defined(GPS_H)
#define	GPS_H

#include "APRSWriter.h"
#include "YSFFICH.h"

#include <string>

class CGPS {
public:
	CGPS(CAPRSWriter* writer);
	~CGPS();

	void data(const unsigned char* source, const unsigned char* data, const CYSFFICH& fich);

	void reset();

private:
	CAPRSWriter*   m_writer;
	unsigned char* m_buffer;
	bool           m_sent;

	void transmitGPS(const unsigned char* source);
};

#endif
