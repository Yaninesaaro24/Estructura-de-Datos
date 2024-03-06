#include <iostream>
#include "Vector.h"  //Declarar el header de la clase
#define MAX 10

using namespace std;

void main() {

	int v[MAX], tamanio;
	Vector vector1;  // Declarando el objeto vector1 de la clase vector
	do {
		cout << "Ingrese el tamanio del vector : ";
		cin >> n;
	} while ((n > MAX) || (n <= 0));
	vector1.set_n(tamanio);
	vector1.cargar(tamanio,v);
	vector1.mostrar(v);
}
	
			do {
				cin >> tamanio;
			} while (tamanio > MAX || tamanio < 0);
			//ordenar y promedio 
