#pragma once
#include "CPU.h"

using namespace std;

class Emachine
{
private:
	static Emachine* instance;
	Emachine();

public:
	static Emachine* getInstance();
	CPU *instanceCPU;
	~Emachine();
};