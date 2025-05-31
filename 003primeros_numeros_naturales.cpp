#include <iostream>
using namespace std;

//PROGRAMA QUE SUMA LOS PRIMEROS "N" NÚMEROS NATURALES

int main(){
	int numero;
	int suma;
	
	cout << "Ingrese la cantidad de numeros naturales que desea sumar: ";
	cin >> numero;

	suma = 0;
	if (numero <= 0) {
		cout << "El numero debe ser mayor a 0." << endl;
		return 1;
	}	
	for (int i = 1; i <= numero; i++){
		suma = suma + i;
	}
	cout << "La suma de los primeros " << numero << " numeros naturales es: " << suma << endl;

	return 0;
}