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
		
		void setRonroneo(string ronroneo);
		
		void setAccionMolesto(string nuevaAccionMelesto);

		string getNombre();

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

	//comer

};


//RECETA PARA CREAR CABECERA PARTE 2
#endif /*__GATO_HPP__*/ //termina de definir el archivo
//FIN RECETA PARA CREAR CABECERA PARTE 2