#include "Gato.hpp"

/*METODOS ASIGNAR - OBTENER*/
void Gato::setMaullido(string maullido){
	this->maullido = maullido;
}

void Gato::setEsHuranio(bool esHuranio){
	this->esHuranio = esHuranio;
}

void Gato::setRonroneo(string ronroneo){
	if(ronroneo > DEMASIADO_GRANDE){
		ronroneo = //ronroneo acortar tamanio o ronroneo por defecte o etc
	}else{
		this->ronroneo = ronroneo;
	}
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
	if( !esHuranio && fuerzaAcariciar < FUERZA_MINIMA_POSITIVA){
		//respuesta positiva: ronroneo
		cout << ronroneo <<endl;
		if(edad < 5){
			//hacer otra cosa
		}
	}else{
		//respuesta negativa: escapa/gruñe/araña 
		cout << accionMolesto <<endl;
	}
}