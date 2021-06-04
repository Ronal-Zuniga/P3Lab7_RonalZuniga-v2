#include "MagoGryffindor.h"
#include <ctime>
#include <cstdlib>

MagoGryffindor::MagoGryffindor(int _atrevimiento, int _astucia, int _inteligencia, int _lealtad, int _valentia):
	Mago(_astucia, _inteligencia, _lealtad, _valentia){
	this->atrevimiento = _atrevimiento;
}

int MagoGryffindor::getAtrevimiento(){
	return this->atrevimiento;
}

void MagoGryffindor::setAtrevimiento(int _atrevimiento){
	this->atrevimiento = _atrevimiento;
}

string MagoGryffindor::toString(){
	return "Astucia: " + to_string(this->astucia) + "\n"
	+ "Inteligencia: " + to_string(this->inteligencia) + "\n"
	+ "Lealtad: " + to_string(this->lealtad) + "\n"
	+ "Valentia: " + to_string(this->valentia) + "\n"
    + "Atrevimiento: " + to_string(this->atrevimiento) + "\n";
}