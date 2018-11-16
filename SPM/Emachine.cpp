#include <string>
#include "Emachine.h"
#include "CPU.h"

Emachine::Emachine()
{
	instanceCPU = new CPU();
}


Emachine::~Emachine()
{
}

Emachine* Emachine::getInstance() {
	if (instance == nullptr) {
		instance = new Emachine();
	}
	return instance;
}

