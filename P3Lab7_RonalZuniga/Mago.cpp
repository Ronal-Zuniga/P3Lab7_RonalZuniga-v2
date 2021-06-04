#include "Mago.h"

Mago::Mago(int _astucia, int _inteligencia, int _lealtad, int _valentia){
	this->astucia = _astucia;
	this->inteligencia = _inteligencia;
	this->lealtad = _lealtad;
	this->valentia = _valentia;
}

int Mago::getAstucia(){
	return this->astucia;
}

void Mago::setAstucia(int _astucia){
	this->astucia = _astucia;
}

int Mago::getInteligencia(){
	return this->inteligencia;
}

void Mago::setInteligencia(int _inteligencia){
	this->inteligencia = _inteligencia;
}

int Mago::getLealtad(){
	return this->lealtad;
}

void Mago::setLealtad(int _lealtad){
	this->lealtad = _lealtad;
}

int Mago::getValentia(){
	return this->valentia;
}

void Mago::setValentia(int _valentia){
	this->valentia = _valentia;
}

