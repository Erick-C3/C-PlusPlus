#include <iostream>

using namespace std;

#include "Gato.hpp"

int main(){

	Gato toffee;// creo un objeto de la clase Gato
	Gato chucky;

	

	chucky.setEsHuranio(SI_HURANIO);//chucky.esHuranio = SI_HURANIO; // NO DEBERIAMOS! ahora con encapsulamiento es NO PODEMOS!
	toffee.setEsHuranio(NO_HURANIO);

	chucky.setAccionMolesto("Araniar >:(");
	toffee.setRonroneo("purrrrrrr :)");




	chucky.serAcariciado();
	toffee.setEsHuranio(SI_HURANIO);
	toffee.setAccionMolesto("grunie y se aleja");
	toffee.serAcariciado();
	toffee.setNombre("toffee");
	cout << "el nombre del gato es "<< toffee.getNombre() <<endl;
	chucky.setNombre("chucky");
	cout << "el nombre del gato es "<< chucky.getNombre() <<endl;
	//toffee.setMaullido("miauuu"); //toffee.maullido =  "miauuu"; NO DEBERIA!
	//toffee.maullar();//el objeto toffee responde al comportamiento maullando

	//chucky.setMaullido("miauuuuuuuuuuuuuuuuuu");
	//chucky.maullar();

	return 0;
}