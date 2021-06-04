#include "MagoSlytherin.h"
#include <ctime>
#include <cstdlib>

MagoSlytherin::MagoSlytherin(int _liderazgo, int _astucia, int _inteligencia, int _lealtad, int _valentia):
	Mago(_astucia, _inteligencia, _lealtad, _valentia){
	this->liderazgo = _liderazgo;
}

int MagoSlytherin::getLiderazgo(){
	return this->liderazgo;
}

void MagoSlytherin::setLiderazgo(int _liderazgo){
	this->liderazgo = _liderazgo;
}

string MagoSlytherin::toString(){
	return "Astucia: " + to_string(this->astucia) + "\n"
	+ "Inteligencia: " + to_string(this->inteligencia) + "\n"
	+ "Lealtad: " + to_string(this->lealtad) + "\n"
	+ "Valentia: " + to_string(this->valentia) + "\n"
	+ "Liderazgo: " + to_string(this->liderazgo) + "\n";
}