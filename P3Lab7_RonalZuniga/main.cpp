#include <iostream>
#include "Mago.h"
#include "MagoSlytherin.h"
#include "MagoHufflepuff.h"
#include "MagoRavenclaw.h"
#include "MagoGryffindor.h"
#include "ClaseHogwarts.h"
#include "SombreroClasificador.h"
#include <vector>
#include <typeinfo>
using std::type_info;
using namespace std;
int menu();
vector<Mago*> creacionMagos();

int main() {
	int opcion;
	ClaseHogwarts* ch;
	SombreroClasificador* sc;
	while((opcion = menu()) != 4) {
		switch(opcion) {
			case 1: {
				cout << endl;
				cout << "Generando magos al azar..." << endl;
				sc = new SombreroClasificador();
				vector<Mago*> magos = creacionMagos();
				ch = sc->clasificar_magos_nuevos(magos, 2021);
				SombreroClasificador* sc = new SombreroClasificador();
				ch = sc->clasificar_magos_nuevos(creacionMagos(), 2021);
				cout << "Magos generados correctamente." << endl;
				cout << endl;
				break;
			}

			case 2: {
				ch->imprimirSlytherin();
				ch->imprimirHufflepuff();
				ch->imprimirRavenclaw();
				ch->imprimirGryffindor();
				break;
			}

			case 3: {
				ch->promedio_habilidades_por_casa();
				break;
			}
		}//fin del switch
	}//fin del while
	ch->~ClaseHogwarts();
	delete ch;
	delete sc;
	return 0;
}

int menu() {
	int opcion;
	cout << "----MENU----" << endl;
	cout << "1. Separar por casas" << endl;
	cout << "2. Imprimir Magos por casa" << endl;
	cout << "3. Imprimir cualidades promedio por casa" << endl;
	cout << "4. Salir" << endl;
	cout << endl;
	cout << "Ingrese la opcion: ";
	cin >> opcion;
	cout << endl;
	while(opcion <= 0 || opcion > 4) {
		cout << "Seleccione una opcion dentro del rango" << endl;
		cout << "Ingrese la opcion: ";
		cin >> opcion;
		cout << endl;
	}
	return opcion;
}

vector<Mago*> creacionMagos() {
	vector<Mago*> magos;
	float r;
	int c1, c2, c3, c4, c5;
	srand ((unsigned)time(0));
	for(int i = 0; i < 20; i++) {
		r = static_cast <float> (rand()) / static_cast <float> (RAND_MAX);
		if(r >= 0 && r <= 0.25) {
			c1 = (0 + (rand() % (20))) + 80;
			c2 = (0 + (rand() % (20))) + 80;
			c3 = (0 + (rand() % (100)));
			c4 = (0 + (rand() % (100)));
			c5 = (0 + (rand() % (100)));
			MagoSlytherin* ms = new MagoSlytherin(c1, c2, c3, c4, c5);
			magos.push_back(ms);
			c1 = 0;
			c2 = 0;
			c3 = 0; 
			c4 = 0;
			c5 = 0;
		}
		if(r > 0.25 && r <= 0.50){
			c1 = (0 + (rand() % (20))) + 80;
			c2 = (0 + (rand() % (100)));
			c3 = (0 + (rand() % (20))) + 80;
			c4 = (0 + (rand() % (100)));
			c5 = (0 + (rand() % (100)));
			MagoRavenclaw* mr = new MagoRavenclaw(c1, c2, c3, c4, c5);
			magos.push_back(mr);
			c1 = 0;
			c2 = 0;
			c3 = 0; 
			c4 = 0;
			c5 = 0;
		}
		if(r > 0.50 && r <= 0.75){
			c1 = (0 + (rand() % (20))) + 80;
			c2 = (0 + (rand() % (100)));
			c3 = (0 + (rand() % (100)));
			c4 = (0 + (rand() % (20))) + 80;
			c5 = (0 + (rand() % (100)));
			MagoHufflepuff* mh = new MagoHufflepuff(c1, c2, c3, c4, c5);
			magos.push_back(mh);
			c1 = 0;
			c2 = 0;
			c3 = 0; 
			c4 = 0;
			c5 = 0;
		}
		if(r > 0.75 && r <= 1.0){
			c1 = (0 + (rand() % (20))) + 80;
			c2 = (0 + (rand() % (100)));
			c3 = (0 + (rand() % (100)));
			c4 = (0 + (rand() % (100)));
			c5 = (0 + (rand() % (20))) + 80;
			MagoGryffindor* mg = new MagoGryffindor(c1, c2, c3, c4, c5);
			magos.push_back(mg);
			c1 = 0;
			c2 = 0;
			c3 = 0; 
			c4 = 0;
			c5 = 0;
		}
	}//fin del for
	return magos;
}//fin del metodo

