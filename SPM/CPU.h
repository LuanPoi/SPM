#pragma once

typedef unsigned int WORD;

class CPU
{
private:
	WORD AX, BX, CX, DX, FL, PC;
	void fetch_instruction();
	void decode();
	void fetch_operands();
	void execute();

public:
	CPU();
	~CPU();
	void exec(WORD init_addr);
};

