#include "SombreroClasificador.h"
#include <typeinfo>
using std::type_info;

SombreroClasificador::SombreroClasificador(){
	
}

ClaseHogwarts* SombreroClasificador::clasificar_magos_nuevos(vector<Mago*> magos, int _year){
	vector <MagoSlytherin*> _magos_slytherin;
	vector <MagoHufflepuff*> _magos_hufflepuff;
	vector <MagoRavenclaw*> _magos_ravenclaw;
	vector <MagoGryffindor*> _magos_gryffindor;
	for(int i = 0; i < magos.size(); i++){
		if(typeid(*magos[i]) == typeid(MagoSlytherin)){
			MagoSlytherin* ms_temp = dynamic_cast<MagoSlytherin*>(magos[i]);
			_magos_slytherin.push_back(ms_temp);
		}
		if(typeid(*magos[i]) == typeid(MagoHufflepuff)){
			MagoHufflepuff* mh_temp = dynamic_cast<MagoHufflepuff*>(magos[i]);
			_magos_hufflepuff.push_back(mh_temp);
		}
		if(typeid(*magos[i]) == typeid(MagoRavenclaw)){
			MagoRavenclaw* mr_temp = dynamic_cast<MagoRavenclaw*>(magos[i]);
			_magos_ravenclaw.push_back(mr_temp);
		}
		if(typeid(*magos[i]) == typeid(MagoGryffindor)){
			MagoGryffindor* mg_temp = dynamic_cast<MagoGryffindor*>(magos[i]);
			_magos_gryffindor.push_back(mg_temp);
		}
	}//fin del for
	ClaseHogwarts* ch = new ClaseHogwarts(_magos_slytherin, _magos_hufflepuff, _magos_ravenclaw, _magos_gryffindor, _year);
	return ch;
}//fin del metodo