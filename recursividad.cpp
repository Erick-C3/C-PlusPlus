#include <iostream>
using namespace std;

/*

	- Recursividad (complementario)
	- Tutorial de como instalar Netbeans y JDK

*/

const int NUM_DEF = -1;

const int NUMERO_CERO_FACT = 0;
const int FACTORIAL_CERO = 1;



/*
	Descripcion: calcula el factorial del numero recibido
	Pre: "numero" >= 0
	Post: devuelve el factorial de "numero"

*/
int factorial(int numero){ // n! = n * (n-1)!  // 5! = 5 * 4 * 3 * 2 * 1 * 1
	int numeroFactorial = NUM_DEF;

	if(numero == NUMERO_CERO_FACT){
		numeroFactorial = FACTORIAL_CERO;
	}else{
		numeroFactorial = numero * factorial(numero-1);
	}

	return numeroFactorial;
}


int main(){


	int numero = NUM_DEF;

	cout << "Ingrese numero para calcular el factorial" <<endl;
	cin >> numero;

	cout << "Factorial de " << numero << " es: "<< factorial(numero) <<endl;


	return 0;
}