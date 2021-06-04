#ifndef MAGO_H
#define MAGO_H
#include <string>
#include <iostream>
using namespace std;

class Mago{
	protected:
		int astucia, inteligencia, lealtad, valentia;
	public:
		Mago();
		Mago(int, int, int ,int);
		int getAstucia();
		void setAstucia(int);
		int getInteligencia();
		void setInteligencia(int);
		int getLealtad();
		void setLealtad(int);
		int getValentia();
		void setValentia(int);
		virtual string toString() = 0;
};

#endif