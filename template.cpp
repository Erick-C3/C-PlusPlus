#include <iostream>

using namespace std;




template <typename dato>
dato devolverMayor(dato numeroA, dato numeroB){
	dato mayor = numeroA;// nulo -> 0
	if(numeroA > numeroB){
		mayor = numeroA;
	}else{
		mayor = numeroB;
	}

	return mayor;
}



int main(){

	int numeroA = 123;
	int numeroB = 324;

	string palabraA = "palabra";
	string palabraB = "palabras";

	char caracterA = 'a';
	char caracterB = 'c';

	float numeroDecA = -1.3F;
	float numeroDecB = -23.34F;

	bool booleanoA = true;// valor numero != 0 -> true = 1
	bool booleanoB = false;// valor de 0


	cout<< devolverMayor<int>(numeroA, numeroB) <<endl;
	cout<< devolverMayor<string>(palabraA, palabraB) <<endl;
	cout<< devolverMayor<char>(caracterA, caracterB) <<endl;
	cout<< devolverMayor<float>(numeroDecA, numeroDecB) <<endl;
	cout<< devolverMayor<bool>(booleanoA, booleanoB) <<endl;

	return 0;
}