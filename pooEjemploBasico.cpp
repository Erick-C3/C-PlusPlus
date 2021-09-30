#include <iostream>

using namespace std;


class Gato{
	/*ATRIBUTOS*/
	private:
		string color;
		float tamanio;
		bool esHurano;
		int edad;
		string maullido = "MAULLIDO DEF";

	/*COMPORTAMIENTO*/
	/*METODOS GETTER SETTER*/
	public:
		void setMaullido(string maullido){
			this->maullido = maullido;
		}
	/*METODOS*/
	//maullar -> podria ser un mp3
	public:
		void maullar(){
			cout << maullido <<endl;
		}
	//serAcariciado
	//comer

};



int main(){

	Gato toffee;// creo un objeto de la clase Gato
	toffee.setMaullido("miauuu"); //toffee.maullido =  "miauuu"; NO DEBERIA!
	toffee.maullar();//el objeto toffee responde al comportamiento maullando


	return 0;
}