#include <iostream>

using namespace std;


const string SALUDO = "Hello world! :D";

const int CASO_A = 1;
const int CASO_B = 2;

const int MAX_TAM = 10;


void mostrarVector(char vector[MAX_TAM]){
	for(int i = 0 ; i < MAX_TAM ; i++){
		cout << (int)vector[i] <<endl;// (char)4
	}
}

int main(){

	//string saludo = "Hello world! :D";

	char vector[MAX_TAM]={};

	int variable = -1;

	mostrarVector(vector);
	


	cout << "ingresa 1 o 2" << endl;
	cin >> variable;

	switch(variable){
		case CASO_A:
			cout<< "caso 1"<<endl;
			break;
		case CASO_B:
			cout<< "caso 2"<<endl;
			break;
		default:
			cout<< "caso por defecto" <<endl;
	}

	cout << SALUDO << endl;// endl \n

	return 0;
}