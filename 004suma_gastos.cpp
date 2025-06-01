#include <iostream>
using namespace std;

//PROGRAMA PARA SUMAR N GASTOS EN UN VIAJE

int main() {
    float gasto;
    float suma = 0;
    char continuar;

    do {
        cout << "Ingrese un gasto: S/.";
        cin >> gasto;
        suma += gasto;
        cout << "Desea ingresar otro gasto? (S/N): ";
        cin >> continuar;
    } while (continuar == 'S' || continuar == 's');

    cout << "Gasto total: S/." << suma << endl;

    return 0;
}