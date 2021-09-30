#include <iostream>

using namespace std;

/*
	Nuestra red social esta implementando el listado de amistades que tienen nuestros usuarios
	El problema que presentan esta claro, no pueden darse tanto lujo de crear contenedores
	que varien de 0 a 1000 o incluso más para cada usuario

	Por lo tanto nos piden una solucion 

	Requisitos:
		- Crear una funcion que devuelva un vector con el numero de amistades (contenedor) exacto 
			para ser mostrado en ese momento
		- Debe eliminarse el contenedor una vez que no se use más (donde ?)
		- La cantidad de amistades se recibe por consola

	extra: permitir que el modulo que crea el contenedor verifique si hace falta liberar memoria de 
		   algun vector anteriormente creado 
		   (En caso de usarse en distintos momentos el modulo y no liberar esos contenedores, que 
		   no se se van a usar, entonces quedarian en memoria)
*/

const int TAM_DEF = -1;
/*
	Descripcion: devuelve un vector con el tamaño requerido
	Pre: "maxTam" tiene que ser >= 0
	Post: devuelve el vector con el tamaño requerido

*/
int* crearContenedorContactos(int maxTam){
	//int contenedor[maxTam]={}; // vector es un puntero
	int* contenedor = new int[maxTam]{}; // crear el contenido como un vector entero
										 // inicio del vector y el contenido

	return contenedor;
}



int main(){
	int maxTam = TAM_DEF;
	int *contenedor = NULL;// NULL constante cero

	cout<< "Ingrese nuevo tamanio"<<endl;
	cin >> maxTam;

	contenedor = crearContenedorContactos(maxTam);// crea y se libera automaticamente por que es memoria estatica

	for(int i = 0 ; i < maxTam ; i++){
		cout<<contenedor[i]<<endl;
	}

	delete contenedor;
	
	return 0;
}