#ifndef MAGOGRYFFINDOR_H
#define MAGOGRYFFINDOR_H
#include "Mago.h"
#include <ctime>
#include <cstdlib>
#include <string>
#include <iostream>
using namespace std;

class MagoGryffindor:public Mago {
	private:
		int atrevimiento;
	public:
		MagoGryffindor(int, int, int, int, int);
		int getAtrevimiento();
		void setAtrevimiento(int);
		string toString();
};

#endif