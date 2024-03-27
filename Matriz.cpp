#include "Matrix.h"
#include <iostream>
using namespace std;
Matrix::Matrix() {
	col = 0;
	filas = 0;
}
Matrix::~Matrix() { }
void Matrix::set_filas(int f) {
	filas = f;
}
int	Matrix::get_filas() {
	return filas;
}
int Matrix :: get_col() {
	return col;
}
void Matrix::set_col(int c) {
	col = c;
}
void Matrix::cargar() {
	for (int i = 0; i < filas; i++) {
		for (int j = 0; j < col; j++)
		{
			cout << "Ingrese el elemento [" << i + 1 << "][" << j + 1<<"]: ";
			cin >> m[i][j];
		}
	}
}
void Matrix::mostrar() {
	for (int i = 0; i < filas; i++) {
		cout << endl;
		for (int j = 0; j < col; j++)
		{
			cout << m[i][j] << " ";
		}
	}}
float Matrix::promedio() {
	float prom, s = 0;
	for (int i = 0; i < filas; i++)
		for (int j = 0; j < col; j++)
			s = s + m[i][j];
	prom = s / (filas * col);
	return prom;
}
int Matrix::mayorelemento() {

int may = m[0][0];
for (int i = 0; i < filas; i++)
	for (int j = 0; j < col; j++)
		if (m[i][j] > may)
			may = m[i][j];
return may;}
