#include <iostream>
using namespace std;

/*

	 - Intro peque a memoria dinamica y estatica
	 	problema ? 
			vector mascotas pacientes de 5 -> 10 (100 MAX) ESPACIO QUE NO SE USA
				- Modificar codigo para alterar el vector X
				- UI permita alterar el tam del vector X  
		 	Tienda/Fabrica/Cualquier negocio-cliente que maneje grandes
		 	cantidades de informacion y no sea posible definir precisamente
		 	el tamaño maximo esperado
	 			- Sus stocks o cantidades son muy variables 
	 			1000 - 60 - 230 - 1022


	 - Intro peque a POO

*/

typedef struct mascota{
	int nombre;
	int edad;
	bool esOperado;
	bool tieneTratamiento;
}mascota_t;


const int MAX_TAM = 1000;

int main(){

	int tamanioMaximo = 0;


	mascota_t mascotasPacientes[MAX_TAM] = {};

	cout << "Ingrese nuevo tamanio" <<endl;
	cin >> tamanioMaximo;

	int *vectorPuntero = new int[tamanioMaximo]{};//pedimos memoria dinamica
	// el uso de archivos y/o base de datos
	// sql -> lenguaje -> algoritmos + algoritmos js, c, c++, java, etc
	// automatizar la obtencion de la informacion que necesito
	// --------------- Inicializacion con esa informacion ------------
	vectorPuntero[50]= -1;

	// vector con 1000
	// vector con 60 ??? tenemos 940 elementos sin usar
	cout<< vectorPuntero[50] <<endl;
	
	delete vectorPuntero;//libera el vector dinamico de 50 de la memoria

	cout << "Actualizar tamanio"<<endl;
	cin >> tamanioMaximo;

	vectorPuntero = new int[tamanioMaximo]{};//pedir memoria dinamica al sistema


	vectorPuntero[100] = -2;

	cout<< vectorPuntero[50] <<endl;// ??
	cout<< vectorPuntero[100] <<endl;

	delete vectorPuntero;//libera el vector dinamico de 100 de la memoria

	return 0;
}