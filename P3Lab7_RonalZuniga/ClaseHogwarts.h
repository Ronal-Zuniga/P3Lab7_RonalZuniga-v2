#ifndef CLASEHOGWARTS_H
#define CLASEHOGWARTS_H
#include "MagoSlytherin.h"
#include "MagoHufflepuff.h"
#include "MagoRavenclaw.h"
#include "MagoGryffindor.h"
#include <vector>

class ClaseHogwarts{
	private:
		int year;
		vector<MagoSlytherin*> magos_slytherin;
		vector<MagoHufflepuff*> magos_hufflepuff;
		vector<MagoRavenclaw*> magos_ravenclaw;
		vector<MagoGryffindor*> magos_gryffindor;
	public:
		ClaseHogwarts(vector<MagoSlytherin*>, vector<MagoHufflepuff*>, vector<MagoRavenclaw*>, vector<MagoGryffindor*>, int);
		void promedio_habilidades_por_casa();
		void imprimirSlytherin();
		void imprimirHufflepuff();
		void imprimirRavenclaw();
		void imprimirGryffindor();
		~ClaseHogwarts();
};

#endif