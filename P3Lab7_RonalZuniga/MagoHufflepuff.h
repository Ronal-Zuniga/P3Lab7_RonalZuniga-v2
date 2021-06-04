#ifndef MAGOHUFFLEPUFF_H
#define MAGOHUFFLEPUFF_H
#include "Mago.h"
#include <ctime>
#include <cstdlib>
#include <string>
#include <iostream>
using namespace std;

class MagoHufflepuff:public Mago {
	private:
		int paciencia;
	public:
		MagoHufflepuff(int, int, int, int, int);
		int getPaciencia();
		void setPaciencia(int);
		string toString();
};

#endif