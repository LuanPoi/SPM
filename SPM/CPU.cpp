#include "CPU.h"
#include <string>
#include <fstream>
#include <iostream>

using namespace std;

CPU::CPU()
{
}


CPU::~CPU()
{
}

bool CPU::loader(string path, unsigned int init_addr)
{
	string s;
	fstream arquivo;
	arquivo.open(path, fstream::in);
	istream & getline(string s, string max(), string delim = " ");
	cout << s << endl;
	arquivo.close();
	return true;
}