#include "Emachine.h"
#include "CPU.h"
#include "Loader.h"
#include "Memory.h"


Emachine::Emachine()
{
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