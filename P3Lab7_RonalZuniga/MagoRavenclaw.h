#ifndef MAGORAVENCLAW_H
#define MAGORAVENCLAW_H
#include "Mago.h"
#include <ctime>
#include <cstdlib>
#include <string>
#include <iostream>
using namespace std;

class MagoRavenclaw:public Mago {
	private:
		int creatividad;
	public:
		MagoRavenclaw(int, int, int, int, int);
		int getCreatividad();
		void setCreatividad(int);
		string toString();
};

#endif