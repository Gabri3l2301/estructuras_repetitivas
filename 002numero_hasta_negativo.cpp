#include <iostream>
using namespace std;

//PROGRAMA QUE FUNCIONA HASTA QUE EL USUARIO INGRESE UN NÚMERO NEGATIVO

int main(){
	int numero;

	do{
		cout << "Ingrese un numero: ";
		cin >> numero;
		if (numero < 0){
			cout << "Numero negativo ingresado" << endl;
			cout << "Fin del programa..." << endl;
		}
	}while (numero >= 0);

	return 0;
}