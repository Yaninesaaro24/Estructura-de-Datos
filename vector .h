#pragma once
#define MAX 10
class Vector
{
private:
	int vec[MAX];
	int n;
public:
	Vector(); // constructor
	~Vector(); //destructor
	void set_n(int _n); //metodos
	int  get_n();//devolver dato     
	void cargar(int _n, int _vec[]); //metodos
	int mostrar(int _vec[]);
	void ordenar(int _vec[], int _vec2[]);
	int promedio(int _vec[], int _n);

};
//implementar los metodos
