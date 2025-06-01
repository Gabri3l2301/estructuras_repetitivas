#include <iostream>
using namespace std;

//PROGRAMA PARA SUMAR N GASTOS EN UN VIAJE

int main() {
    float gasto;
    float suma = 0;
    char continuar;
    int contador = 0;

    do {
        cout << "Ingrese un gasto: S/.";
        cin >> gasto;
        if (gasto > 0) {
            suma += gasto;
            contador++;
        } else {
            cout << "El gasto debe ser mayor a 0." << endl;
        }
        cout << "Desea ingresar otro gasto? (S/N): ";
        cin >> continuar;
    } while (continuar == 'S' || continuar == 's');

    cout << "Gasto total: S/." << suma << endl;
    cout << "Cantidad de gastos ingresados: " << contador << endl;

    return 0;
}