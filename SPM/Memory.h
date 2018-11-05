#pragma once

#define MEMORYSIZEINMEGABYTE 16
#define WORDSYSTEMSIZE 64 //32 or 64 bits.

#define MEMORYSIZE (MEMORYSIZEINMEGABYTE*8000000)/WORDSYSTEMSIZE  //8.000.000 (bits) = 1 MegaByte

typedef int WORD;

class Memory
{
private:
	WORD memorySpace[MEMORYSIZE];
	
public:
	Memory();
	~Memory();
	WORD read(WORD position);
	bool write(WORD data, WORD position);
};

                                                                                                                                                                                                                                                                                                                                         