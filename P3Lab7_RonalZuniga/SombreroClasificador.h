#ifndef SOMBREROCLASIFICADOR_H
#define SOMBREROCLASIFICADOR_H
#include "ClaseHogwarts.h"
#include "Mago.h"
#include "MagoSlytherin.h"
#include "MagoHufflepuff.h"
#include "MagoRavenclaw.h"
#include "MagoGryffindor.h"
#include <vector>
#include <typeinfo>
using std::type_info;

class SombreroClasificador{
	public:
		SombreroClasificador();
		ClaseHogwarts* clasificar_magos_nuevos(vector<Mago*>, int);
};

#endif