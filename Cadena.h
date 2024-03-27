#pragma once
#include <string>
using namespace std;
class Cadena
{
private:
	int	longitud;
	string cadena;
public:
	Cadena();
	~Cadena();
	void set_cadena(string c);
	string get_cadena();
	int get_longitud();
	int Longitud();
	void comparacion_dedoscadenas(string c2);
	int contarvocales();
	void substring(int n1, int n2);
	void intercambiar_lacadena(string c);
	int encontrarchar(char ch);
	void invertirfrase();
	bool palindromo();

};
