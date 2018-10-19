#pragma once

#define MEMORYSIZEINMEGABYTE 16
#define WORDSYSTEMSIZE 64 //32 or 64 bits.

#define MEMORYSIZE (MEMORYSIZEINMEGABYTE*8000000)/WORDSYSTEMSIZE  //8.000.000 (bits) = 1 MegaByte
typedef unsigned int WORD;

class Memory
{
private:
	WORD memorySpace[MEMORYSIZE][2]; // memorySpace [<Data>] [<lifetime>]. 
	bool inUse[MEMORYSIZE];
	WORD pointer;
	const WORD lifetime = 3;
public:
	Memory();
	~Memory();
	WORD getData(WORD position);
	WORD setData(WORD data);
	WORD setData(WORD data, WORD position);
};

                                                                                                                                                                                                                                                                                                                                         