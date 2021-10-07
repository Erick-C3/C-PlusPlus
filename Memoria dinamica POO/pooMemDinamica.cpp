#include <iostream>


using namespace std;

#include "Gato.hpp"// IMPORTANDO/INCLUYENDO todo el codigo de la clase Gato
				   // Le estoy enseñando que es un gato a mi programa

int main(){

	Gato miGato("gris con blanco", 1000.0f, false, "toffee");// instancia estatica

	Gato* miGatoDinamicamente = new Gato("anaranjado", 1000.0f, false, "chucky");


	(*miGatoDinamicamente).getNombre();



	delete miGatoDinamicamente;

	return 0;
}