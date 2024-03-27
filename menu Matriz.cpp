#include "Matrix.h"
#define MAX 20
using namespace std;
int main()
{

	int f, c, opc;
	Matrix m1;
	do {
		cout << "Ingrese el numero de filas: ";
		cin >> f;
	} while (f<1 || f>MAX);
	m1.set_filas(f);
	do {
		cout << "Ingrese el numero de columnas: ";
		cin >> c;
	} while (c<1 || c> MAX);
	m1.set_col(c);
	do {
		cout << "\t Menu\n";
		cout << "\t ====\n\n";
		cout << "(1) Cargar Matriz\n";
		cout << "(2) Mostrar Matriz\n";
		cout << "(3) Promedio Matriz\n";
		cout << "(4) Mayor Matriz\n";
		cout << "(0) Salir\n";
		cout << "Opcion:";
		cin >> opc;
		switch (opc) {
		case 1: m1.cargar();
			break;
		case 2: m1.mostrar();
			break;
		case 3:
			cout << "El valor promedio es: " << m1.promedio() << endl;
			break;
		case 4: cout << "El mayor es: " << m1.mayorelemento() << endl;
			break;
		case 0: cout << "Salir\n";
			break;
		default: cout << "Error\n";
			break;
		}
	} while (opc != 0);
	return 0;
}
