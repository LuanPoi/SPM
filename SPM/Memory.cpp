#include "Memory.h"
#include <iostream>



Memory::Memory()
{
	for (WORD cont : inUse) {
		inUse[cont] = false;
	}
}


Memory::~Memory()
{
}

WORD Memory::getData(WORD position){
	if (position >= MEMORYSIZE || !inUse[position])
		return 000;
	return memorySpace[position][0];
}

WORD Memory::setData(WORD data) {
	while(true){
		if (pointer >= MEMORYSIZE) {
			pointer = 0;
		}
		else if (!inUse[pointer]) {
			memorySpace[pointer][0] = data;
			memorySpace[pointer][1] = 0;
			inUse[pointer] = true;
			return pointer;
		}
		else if (inUse[pointer] && memorySpace[pointer][1] >= lifetime) {
			memorySpace[pointer][0] = data;
			memorySpace[pointer][1] = 0;
			return pointer;
		}
		else {
			memorySpace[pointer][1] += 1;
			pointer++;
		}
	}	
}

WORD Memory::setData(WORD data, WORD position) {
	if (position >= MEMORYSIZE || (inUse[position] && memorySpace[position][1] < lifetime))
		memorySpace[position][1] += 1;
		return 000;
	memorySpace[position][0] = data;
	memorySpace[position][1] = 0;
	inUse[position] = true;
	return data;
}