#include "Cadena.h"
#include <iostream>
#include <string>
using namespace std;

Cadena::Cadena() {}
Cadena::~Cadena() {}
void Cadena::set_cadena(string c) {
	cadena = c;
	longitud = cadena.length();
}
int Cadena::Longitud() {
	return cadena.length();
}
void Cadena::comparacion_dedoscadenas(string c2) {
	if (cadena == c2)
		cout << "Las cadenas son iguales" << endl;
	else
		cout << "Las cadenas no son iguales" << endl;
}
int Cadena::contarvocales() {
	int contador = 0;
	for (int i = 0; i < longitud; i++) {
		char c = cadena[i];
		if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
			c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
			contador++;
		}
	}
	return contador;
}
void Cadena::substring(int n1, int n2) {
	cout << cadena.substr(n1, n2) << endl;
}
void Cadena::intercambiar_lacadena(string c) {
	string cadena1 = cadena;
	string cadena2 = c;
	cadena1.swap(cadena2);
	cout << "Ahora la cadena inicial es " << cadena1 << " y la cadena 2 es : " << cadena2 << endl;
}
int  Cadena::encontrarchar(char ch) {
	int valor;
	for (int i = 0; i < longitud; i++) {
		if (cadena[i] == ch)
			return i;
	}
}
void Cadena::invertirfrase() {
	string aux;
	for (int i = 0; i < longitud; i++)
	{
		aux[i] = cadena[longitud - 1 - i];
	}
	cout << "La cadena invertida es " << aux << endl;
}
bool Cadena::palindromo() {
	int inicio = 0;
	int fin = longitud - 1;

	while (inicio < fin) {
		if (cadena[inicio] != cadena[fin]) {
			return false;
		}
		inicio++;
		fin--;
	}
	return true;
}
