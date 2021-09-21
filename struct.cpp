#include <iostream>

using namespace std;

const int MAX_MASCOTAS = 2;

const string DEF_NOMBRE_PERSONA = "def nombre";
const int DEF_EDAD = -1;
const int DEF_DNI = -1;
const float DEF_PESO = -1.0F;
const bool DEF_TIENE_MASCOTA = false;


//Defino el nuevo tipo de dato struct
//inicializo los campos por defecto con las constantes
typedef struct persona{
	//Creacion de los campos del tipo de dato persona_t
	string nombre = DEF_NOMBRE_PERSONA;
	int edad = DEF_EDAD;
	int dni = DEF_DNI;
	float peso = DEF_PESO;
	bool tieneMascota = DEF_TIENE_MASCOTA;
	string nombreMascotas[MAX_MASCOTAS] = {};
}persona_t;






int main(){

	//defino e inicializo la variable abstracta personaA 
	persona_t personaA ;

	cout << personaA.nombre <<endl;
	//pido nombre nuevo para la variable abstracta personaA
	cout << "Ingrese nombre de la personaA" <<endl;
	cin >> personaA.nombre;
	cout << "Nombre ingresado para personaA: "<<personaA.nombre << endl;


	//imprimo unos campos en consola
	cout << personaA.nombre << endl;
	cout << personaA.edad << endl;
	cout << personaA.dni << endl;

	//verificar si personaA tiene mascota y mostrar los nombres en caso positivo
	if( personaA.tieneMascota ){		
		cout << personaA.nombreMascotas[0] <<endl;
		cout << personaA.nombreMascotas[1] <<endl;
	}else{
		cout << "no tiene mascotas" <<endl;
	}

	return 0;
}