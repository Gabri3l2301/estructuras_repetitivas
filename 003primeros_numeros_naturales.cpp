#include <iostream>
using namespace std;

//PROGRAMA QUE SUMA LOS PRIMEROS "N" NÚMEROS NATURALES

int main(){
	int numero;
	int suma;
	
	cout << "Ingrese la cantidad de numeros naturales que desea sumar: ";
	cin >> numero;
	
	suma = 0;
	for (int i = 1; i <= numero; i++){
		suma = suma + i;
	}
	cout << suma;
	return 0;
}