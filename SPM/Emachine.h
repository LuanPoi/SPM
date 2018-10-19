#pragma once
#include "CPU.h"
#include "Loader.h"
#include "Memory.h"

class Emachine
{
private:
	static Emachine* instance;
	CPU instanceCPU;
	Loader instanceLoader;
	Memory instanceMemory;
	Emachine();

public:
	static Emachine* getInstance();
	~Emachine();
};