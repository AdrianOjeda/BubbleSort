// BubbleSort.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
using namespace std;


int main()
{
    int v[] = { 2, 7, 8, 9, 0, 8, 1, -1, -2 };
    int size = sizeof(v) / sizeof(*v);

    int aux =0;
    int round = 0;
    bool ordenado = false;

    for (int i = 0; i < size; i++) {
        cout << v[i] << " ";

        while (!ordenado) {

            ordenado = true;
            for (int i = 0; i< size -1 - round; i++) {
                if (v[i] > v[i + 1]) {

                    aux = v[i];
                    v[i] = v[i + 1];
                    v[i + 1] = aux;
                    ordenado = false;
                }
            }

            round++;
            cout << endl;
            for (int i = 0; i < size; i++) {
                cout << v[i] << " ";
            }

            
            cout << endl;
        }

    }
    cout << endl;
    for (int i = 0; i < size; i++) {
        cout << v[i] << " ";
    }

}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
