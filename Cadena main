#include <iostream>
#include "Cadena.h"
#include <string>

using namespace std;

int main() {
    int opcion;
    string c, c2;
    Cadena cadenita1;


    cout << "ingrese la cadena: " << endl;
    getline(cin, c);
    cadenita1.set_cadena(c);

    do {
        cout << "\nMenu de opciones:" << endl;
        cout << "1. Longitud" << endl;
        cout << "2. Comparacion" << endl;
        cout << "3. Contar vocales" << endl;
        cout << "4. Substring" << endl;
        cout << "5. Intercambiar" << endl;
        cout << "6. Encontrar caracteres" << endl;
        cout << "7. Invertir una frase" << endl;
        cout << "8. palindromo" << endl;
        cout << "0. Salir" << endl;
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        switch (opcion) {

        case 1: {
            cin.ignore();
            cout << "La longitud es " << cadenita1.Longitud();
        }
              break;
        case 2: {
            cin.ignore();
            cout << "Ingrese la cadena a comparar: ";
            getline(cin, c2);
            cadenita1.comparacion_dedoscadenas(c2);
        }
              break;
        case 3: {
            cin.ignore();
            cout<<"La cadena tiene "<<cadenita1.contarvocales()<<" vocales"<<endl;
        }

              break;
        case 4: {int n1, n2;
            cout << "Ingrese el numero en el que empieza el substring: ";
            cin >> n1;
            cout << "Ingrese el numero en el que termina el substring: ";
            cin >> n2;
            cadenita1.substring(n1, n2);
        }
              break;
        case 5: {
            cin.ignore();
            cout << "Ingrese la cadena: ";
            getline(cin, c2);
            cadenita1.intercambiar_lacadena(c2);
        }

              break;
        case 6: { char ch;
            cout << "Ingrese que caracter quiere buscar: ";
            cin >> ch;
            cout << "Ese caracter se encuentra en la posicion: " << cadenita1.encontrarchar(ch) << endl;

        } break;
            
        case 7: {
            cadenita1.invertirfrase();
        }
            break;
        case 8: {
            if (cadenita1.palindromo())
                cout << "La frase es palindroma" << endl;
            else
                cout << "La frase no es palindroma" << endl;
        }
            break;
        case 0:
            cout << "el programa ha terminado" << endl;
            break;
        default:
            cout << "opcion no valida" << endl;
        }

    } while (opcion != 0);
        
}
