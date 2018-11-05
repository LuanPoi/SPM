#include "Memory.h"
#include <iostream>



Memory::Memory()
{
}


Memory::~Memory()
{
}

WORD Memory::read(WORD position){
	return memorySpace[position];
}

bool Memory::write(WORD data, WORD position) {
	if (position >= MEMORYSIZE)
		return false;
	memorySpace[position] = data;
	return true;
}