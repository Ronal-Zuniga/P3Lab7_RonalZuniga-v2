#ifndef MAGOSLYTHERIN_H
#define MAGOSLYTHERIN_H
#include "Mago.h"
#include <ctime>
#include <cstdlib>
#include <string>
#include <iostream>
using namespace std;

class MagoSlytherin:public Mago {
	private:
		int liderazgo;
	public:
		MagoSlytherin(int, int, int, int, int);
		int getLiderazgo();
		void setLiderazgo(int);
		string toString();
};

#endif