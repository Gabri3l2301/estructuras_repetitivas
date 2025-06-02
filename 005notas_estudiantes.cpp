#include <iostream>
using namespace std; //PROGRAMA PARA CALCULAR PROMEDIO Y CANTIDAD DE APROBADOS/DESAPROBADOS

int main() {
    float nota;
    float suma = 0;
    float promedio;
    int aprobados = 0;
    int desaprobados = 0;
    int total = 0;
    char continuar;

    do {
        cout << "Ingrese la nota del estudiante: ";
        cin >> nota;

        if (nota < 0 || nota > 20) {
            cout << "La nota debe estar entre 0 y 20." << endl;
        }else{
            suma += nota;
            total++;
            if (nota >= 10.5){
                aprobados++;
            }else{
                desaprobados++;
            }
        }
        cout << "¿Desea ingresar otra nota? (S/N): ";
        cin >> continuar;
    } while (continuar == 'S' || continuar == 's');

    if (total > 0) {
        promedio = suma / total;
        cout << "Cantidad de estudiantes: " << total << endl;
        cout << "Cantidad de aprobados: " << aprobados << endl;
        cout << "Cantidad de desaprobados: " << desaprobados << endl;
        cout << "Promedio del salón: " << promedio << endl;
    } else {
        cout << "No se ingresaron notas" << endl;
    }

    return 0;
}