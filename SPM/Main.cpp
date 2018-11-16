#include "Emachine.h"
#include <iostream>
int main() {
	Emachine* maquina = Emachine::getInstance();
	if (maquina != nullptr)
		std::cout << "funcionou!" << std::endl;
	maquina->instanceCPU->loader("C:/Users/Andromeda/Downloads/prog.run", 0);
	return 0;
}