#include "Gato.hpp"

/*METODOS ASIGNAR - OBTENER*/
void Gato::setMaullido(string maullido){
	this->maullido = maullido;
}

void Gato::setEsHuranio(bool esHuranio){
	this->esHuranio = esHuranio;
}

void Gato::setRonroneo(string ronroneo){
	this->ronroneo = ronroneo;
}

void Gato::setAccionMolesto(string nuevaAccionMelesto){
	accionMolesto = nuevaAccionMelesto;
}

string Gato::getNombre(){
	return nombre;
}

void Gato::setNombre(string nombre){
	this->nombre = nombre;
}

/*METODOS*/

void Gato::maullar(){
	cout << maullido <<endl;
}


void Gato::serAcariciado(){
	if( !esHuranio ){
		//respuesta positiva: ronroneo
		cout << ronroneo <<endl;
	}else{
		//respuesta negativa: escapa/gruñe/araña 
		cout << accionMolesto <<endl;
	}
}