#ifndef	HPDL_h
#define	HPDL_h

#include	"Arduino.h"

class	HPDL
{
	public:
	HPDL(byte wri, byte ds0, byte ds1, byte d0, byte d1, byte d2, byte d3, byte d4, byte d5, byte d6);
	void putcc(byte ds,char d);
	private:
	byte _wri; 
	byte _ds0; 
	byte _ds1; 
	byte charset[128];
	byte state;
	byte output[7];
};

#endif