#include "MagoRavenclaw.h"
#include <ctime>
#include <cstdlib>

MagoRavenclaw::MagoRavenclaw(int _creatividad, int _astucia, int _inteligencia, int _lealtad, int _valentia):
	Mago(_astucia, _inteligencia, _lealtad, _valentia){
	this->creatividad = _creatividad;
}


int MagoRavenclaw::getCreatividad(){
	return this->creatividad;
}

void MagoRavenclaw::setCreatividad(int _creatividad){
	this->creatividad = _creatividad;
}

string MagoRavenclaw::toString(){
	return "Astucia: " + to_string(this->astucia) + "\n"
	+ "Inteligencia: " + to_string(this->inteligencia) + "\n"
	+ "Lealtad: " + to_string(this->lealtad) + "\n"
	+ "Valentia: " + to_string(this->valentia) + "\n"
    + "Creatividad: " + to_string(this->creatividad) + "\n";
}