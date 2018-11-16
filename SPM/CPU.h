#pragma once
#include "Memory.h"
#include <string>
#include <fstream>
#include <iostream>

using namespace std;

typedef unsigned int WORD;

class CPU
{
private:
	Memory * instanceMemory;
	int AX, BX, CX, DX, FL, PC;
	void fetch_instruction();
	void decode();
	void fetch_operands();
	void execute();

public:
	CPU();
	~CPU();
	void exec(WORD init_addr);
	bool loader(string path, unsigned int init_addr);
};

