//RECETA PARA CREAR CABECERA PARTE 1 
#ifndef __GATO_HPP__ //si no esta definido en archivo
#define __GATO_HPP__ // definir este archivo

#include <iostream>
using namespace std;
//FIN DE RECETA PARA CREAR CABECERA PARTE 1 

const string RONRONEO_DEF = "RONRONEO DEF";
const string MAULLIDO_DEF = "MAULLIDO DEF";

const bool HURANIO_DEF = false;
const bool SI_HURANIO = true;
const bool NO_HURANIO = false;

const string ACCION_MOLESTO_DEF = "ACC MOLESTO DEF";

const string NOMBRE_DEF = "NOMBRE DEF";

const float COMIDA_MINIMO = 200.0F;

//CODIGO
class Gato{
	/*ATRIBUTOS*/
	private:
		string color;
		float tamanio;
		bool esHuranio = HURANIO_DEF;
		int edad;
		string nombre = NOMBRE_DEF;
		string maullido = MAULLIDO_DEF;
		string ronroneo = RONRONEO_DEF;
		string accionMolesto = ACCION_MOLESTO_DEF;

	/*COMPORTAMIENTO*/
	/*METODOS GETTER SETTER*/ // METODOS OBTENER Y ASIGNAR (para los atributos)
	public:

		/*
			Descripcion: asigna un nuevo al atributo "maullido"
			Pre: -.
			Post: el atributo "maullido" queda actualizado
		*/
		void setMaullido(string maullido);

		/*
			Descripcion: asigna un nuevo al atributo "maullido"
			Pre: -.
			Post: el atributo "maullido" queda actualizado
		*/
		void setEsHuranio(bool esHuranio);
		
		/*
			Descripcion: asigna un nuevo al atributo "ronroneo"
			Pre: -.
			Post: el atributo "ronroneo" queda actualizado
		*/
		void setRonroneo(string ronroneo);
		
		/*
			Descripcion: asigna un nuevo al atributo "accionMolesto"
			Pre: -.
			Post: el atributo "accionMolesto" queda actualizado
		*/
		void setAccionMolesto(string nuevaAccionMelesto);

		/*
			Descripcion: devuelve el atributo "nombre"
			Pre: -.
			Post: devuelve el valor del atributo "nombre"
		*/
		string getNombre();

		/*
			Descripcion: asigna un nuevo al atributo "nombre"
			Pre: -.
			Post: el atributo "nombre" queda actualizado
		*/
		void setNombre(string nombre);

	/*METODOS*/
	public:
		/*
			Descripcion: imprime el "maullido" del Gato
			Pre:-.
			Post: imprime por consola el atributo "maullido"
		*/
		void maullar();

		/*
			Descripcion: imprime la "accionMolesto" dependiendo de si "esHuranio"
			Pre:-.
			Post: imprime por consola el atributo "accionMolesto" dependienddo del valor de atributo "esHuranio"
		*/
		void serAcariciado();

	//comers
		/*
			Descripcion: el Gato come el pienso dado y devuelve lo sobrante
			Pre: cantPienso >= COMIDA_MINIMO
			Post: devuelve la cantidad de comida restante

			Post-Sebastian: devuelve un resultado negativo si quedo con hambre, cero si quedo 
			satisfecho y mayor a cero si sobro comida
		*/
		float comer(float cantPienso){
			//implementar instrucciones de COMO deberia comer el Gato
			cantPienso = cantPienso - COMIDA_MINIMO;
			//aumentar el peso
			return cantPienso;
		}

};


//RECETA PARA CREAR CABECERA PARTE 2
#endif /*__GATO_HPP__*/ //termina de definir el archivo
//FIN RECETA PARA CREAR CABECERA PARTE 2