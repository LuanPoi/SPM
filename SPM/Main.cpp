#include "Emachine.h"
#include <iostream>
int main() {
	Emachine* maquina = Emachine::getInstance();
	if (maquina != nullptr)
		std::cout << "funcionou!" << std::endl;
	return 0;
}