#include <iostream>

using namespace std;

const int MAX_TAM = 100;

const int AUX_DEF = -1;

int main(){

	int turnos[MAX_TAM];
	int aux = AUX_DEF;

	//bubble sort
	for(int i=0 ; i < MAX_TAM -1 ; i++){//para acceder varias veces necesarias al vector
		//el ultimo se ordena por defecto
		for(int j = 0; j < MAX_TAM -i -1 ; j++){
			// mueve el elemento de mayor valor al final
			if(turnos[j] > turnos[j+1]){//si es mayor
				aux = turnos[j];//para que no se pierda/borre el elemento
				turnos[j]=turnos[j+1];
				turnos[j+1]=aux;//sea igual al elemento anterior
			}
		}
	}


	for(int i = 0 ; i < MAX_TAM ; i ++){
		cout<<turnos[i]<<endl;
	}

	return 0;
}