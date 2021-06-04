#include "ClaseHogwarts.h"
#include <iostream>
using namespace std;

ClaseHogwarts::ClaseHogwarts(vector<MagoSlytherin*> _magos_slytherin, vector<MagoHufflepuff*> _magos_hufflepuff, 
	vector<MagoRavenclaw*> _magos_ravenclaw, vector<MagoGryffindor*> _magos_gryffindor, int _year){
	this->magos_slytherin = _magos_slytherin;
	this->magos_hufflepuff = _magos_hufflepuff;
	this->magos_ravenclaw = _magos_ravenclaw;
	this->magos_gryffindor = _magos_gryffindor;
	this->year = _year;
}

ClaseHogwarts::~ClaseHogwarts(){
	for(int i = 0; i < this->magos_slytherin.size(); i++){
		MagoSlytherin* ms = magos_slytherin[i];
		delete ms;
		this->magos_slytherin.erase(this->magos_slytherin.begin() + 1);
	}
	this->magos_slytherin.clear();
	for(int i = 0; i < this->magos_hufflepuff.size(); i++){
		MagoHufflepuff* mh = magos_hufflepuff[i];
		delete mh;
		this->magos_hufflepuff.erase(this->magos_hufflepuff.begin() + 1);
	}
	this->magos_hufflepuff.clear();
	for(int i = 0; i < this->magos_ravenclaw.size(); i++){
		MagoRavenclaw* mr = magos_ravenclaw[i];
		delete mr;
		this->magos_ravenclaw.erase(this->magos_ravenclaw.begin() + 1);
	}
	this->magos_ravenclaw.clear();
	for(int i = 0; i < this->magos_gryffindor.size(); i++){
		MagoGryffindor* mg = magos_gryffindor[i];
		delete mg;
		this->magos_gryffindor.erase(this->magos_gryffindor.begin() + 1);
	}
	this->magos_gryffindor.clear();
}

void ClaseHogwarts::promedio_habilidades_por_casa(){
	int _astucia = 0, _inteligencia = 0, _lealtad = 0, _valentia = 0;
	int _atrevimiento = 0, _liderazgo = 0, _paciencia = 0, _creatividad = 0;
	for(int i = 0; i < this->magos_slytherin.size(); i++){
		_astucia += magos_slytherin[i]->getAstucia();
		_inteligencia += magos_slytherin[i]->getInteligencia();
		_lealtad += magos_slytherin[i]->getLealtad();
		_valentia += magos_slytherin[i]->getValentia();
		_liderazgo += magos_slytherin[i]->getLiderazgo();
	}
	cout << endl;
	cout << "Promedio de Cualidades de los Magos de Slytherin" << endl;
	cout << "Astucia: " << (_astucia/(magos_slytherin.size()-1)) << endl;
	cout << "Inteligencia: " << (_inteligencia/(magos_slytherin.size()-1)) << endl;
	cout << "Lealtad: " << (_lealtad/(magos_slytherin.size()-1)) << endl;
	cout << "Valentia: " << (_valentia/(magos_slytherin.size()-1)) << endl;
	cout << "Liderazgo: " << (_liderazgo/(magos_slytherin.size()-1)) << endl;
	cout << endl;
	_astucia = 0;
	_inteligencia = 0;
	_lealtad = 0;
	_valentia = 0;
	for(int i = 0; i < this->magos_hufflepuff.size(); i++){
		_astucia += magos_hufflepuff[i]->getAstucia();
		_inteligencia += magos_hufflepuff[i]->getInteligencia();
		_lealtad += magos_hufflepuff[i]->getLealtad();
		_valentia += magos_hufflepuff[i]->getValentia();
		_paciencia += magos_hufflepuff[i]->getPaciencia();
	}
	cout << endl;
	cout << "Promedio de Cualidades de los Magos de Hufflepuff" << endl;
	cout << "Astucia: " << (_astucia/(magos_hufflepuff.size()-1)) << endl;
	cout << "Inteligencia: " << (_inteligencia/(magos_hufflepuff.size()-1)) << endl;
	cout << "Lealtad: " << (_lealtad/(magos_hufflepuff.size()-1)) << endl;
	cout << "Valentia: " << (_valentia/(magos_hufflepuff.size()-1)) << endl;
	cout << "Paciencia: " << (_paciencia/(magos_hufflepuff.size()-1)) << endl;
	cout << endl;
	_astucia = 0;
	_inteligencia = 0;
	_lealtad = 0;
	_valentia = 0;
	for(int i = 0; i < this->magos_ravenclaw.size(); i++){
		_astucia += magos_ravenclaw[i]->getAstucia();
		_inteligencia += magos_ravenclaw[i]->getInteligencia();
		_lealtad += magos_ravenclaw[i]->getLealtad();
		_valentia += magos_ravenclaw[i]->getValentia();
		_creatividad += magos_ravenclaw[i]->getCreatividad();
	}
	cout << endl;
	cout << "Promedio de Cualidades de los Magos de Ravenclaw" << endl;
	cout << "Astucia: " << (_astucia/(magos_ravenclaw.size()-1)) << endl;
	cout << "Inteligencia: " << (_inteligencia/(magos_ravenclaw.size()-1)) << endl;
	cout << "Lealtad: " << (_lealtad/(magos_ravenclaw.size()-1)) << endl;
	cout << "Valentia: " << (_valentia/(magos_ravenclaw.size()-1)) << endl;
	cout << "Creatividad: " << (_creatividad/(magos_ravenclaw.size()-1)) << endl;
	cout << endl;
	_astucia = 0;
	_inteligencia = 0;
	_lealtad = 0;
	_valentia = 0;
	for(int i = 0; i < this->magos_gryffindor.size(); i++){
		_astucia += magos_gryffindor[i]->getAstucia();
		_inteligencia += magos_gryffindor[i]->getInteligencia();
		_lealtad += magos_gryffindor[i]->getLealtad();
		_valentia += magos_gryffindor[i]->getValentia();
		_atrevimiento += magos_gryffindor[i]->getAtrevimiento();
	}
	cout << endl;
	cout << "Promedio de Cualidades de los Magos de Gryffindor" << endl;
	cout << "Astucia: " << (_astucia/(magos_gryffindor.size()-1)) << endl;
	cout << "Inteligencia: " << (_inteligencia/(magos_gryffindor.size()-1)) << endl;
	cout << "Lealtad: " << (_lealtad/(magos_gryffindor.size()-1)) << endl;
	cout << "Valentia: " << (_valentia/(magos_gryffindor.size()-1)) << endl;
	cout << "Atrevimiento: " << (_atrevimiento/(magos_gryffindor.size()-1)) << endl;
	cout << endl;
}//fin metodo promedio

void ClaseHogwarts::imprimirSlytherin(){
	cout << endl;
	cout << "Magos de Slytherin" << endl;
	cout << endl;
	for(int i = 0; i < this->magos_slytherin.size(); i++){
		cout << magos_slytherin[i]->toString();
		cout << endl;
	}
	cout << endl;
}

void ClaseHogwarts::imprimirHufflepuff(){
	cout << endl;
	cout << "Magos de Hufflepuff" << endl;
	cout << endl;
	for(int i = 0; i < this->magos_hufflepuff.size(); i++){
		cout << magos_hufflepuff[i]->toString();
		cout << endl;
	}
	cout << endl;
}

void ClaseHogwarts::imprimirRavenclaw(){
	cout << endl;
	cout << "Magos de Ravenclaw" << endl;
	cout << endl;
	for(int i = 0; i < this->magos_ravenclaw.size(); i++){
		cout << magos_ravenclaw[i]->toString();
		cout << endl;
	}
	cout << endl;
}

void ClaseHogwarts::imprimirGryffindor(){
	cout << endl;
	cout << "Magos de Gryffindor" << endl;
	cout << endl;
	for(int i = 0; i < this->magos_gryffindor.size(); i++){
		cout << magos_gryffindor[i]->toString();
		cout << endl;
	}
	cout << endl;
}