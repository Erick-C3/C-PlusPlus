#include <iostream>

using namespace std;

#include "Gato.hpp"


// PROGRAMA - SOFTWARE 

class Persona{
	public:

		/*
		 *Descripcion: alimenta a una mascota con el pienso dado
		 *Pre: "mascota" correctamente definido e inicializado y "cantPienso" >= "COMIDA_MINIMO"
		 *Post: la "mascota" es alimentada y mostramos por consola el pienso restante
		*/
		void alimentaA(Gato mascota, float cantPienso){
			cout << "veo que sobro: "<<mascota.comer(cantPienso) <<"gr"<<endl;
		}
};


int main(){

	Gato toffee;// creo un objeto de la clase Gato
	Gato chucky;
	Persona erick;

	erick.alimentaA(toffee, 300);// o cantPienso
	erick.alimentaA(chucky, 200);


	return 0;
}