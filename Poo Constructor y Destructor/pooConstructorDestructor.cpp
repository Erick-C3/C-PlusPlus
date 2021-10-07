#include <iostream>

using namespace std;

#include "Gato.hpp"


// PROGRAMA - SOFTWARE 

class Persona{
	private:
		string nombre;
	public:

		Persona(string nombre){
			cout << "creando objeto persona con nombre: "<< nombre <<endl;
			this->nombre = nombre;
		}

		/*
		 *Descripcion: alimenta a una mascota con el pienso dado
		 *Pre: "mascota" correctamente definido e inicializado y "cantPienso" >= "COMIDA_MINIMO"
		 *Post: la "mascota" es alimentada y mostramos por consola el pienso restante
		*/
		void alimentaA(Gato mascota, float cantPienso){
			float piensoRestante = mascota.comer(cantPienso);
			cout << "veo que sobro: "<< piensoRestante <<"gr"<<endl;
		}

		~Persona(){
			cout << "llamando al destructor del objeto "<<nombre<<endl;
		}
};


int main(){
	float comidaParaGatoUno = 300;
	float comidaParaChucky = 200;
	Gato gatoUno("gris con blanco", 1000.0f, false, "toffee");// creo un objeto de la clase Gato
	Gato chucky("anaranjado", 2000.0f, true, "chucky");//uso el constructor y asigno los valores iniciales
	Persona alguien("erick");


	cout << "el color de "<<gatoUno.getNombre() << " es "<<gatoUno.getColor() <<endl;

	return 0;
}