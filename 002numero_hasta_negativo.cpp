#include <iostream>
using namespace std;

//PROGRAMA QUE FUNCIONA HASTA QUE EL USUARIO INGRESE UN NÚMERO NEGATIVO

int main(){
	int numero;
	int contador = 0;

	do{
		cout << "Ingrese un numero: ";
		cin >> numero;
		if (numero < 0){
			cout << "Numero negativo ingresado" << endl;
			cout << "Fin del programa..." << endl;
		}
		contador++;
	}while (numero >= 0);

	cout << "Cantidad de numeros positivos ingresados: " << contador - 1 << endl;
	
	return 0;
}
