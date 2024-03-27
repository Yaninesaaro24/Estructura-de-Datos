#pragma once
class Matrix{
	private:
		int m[20][20];
		int filas;
		int col;
	public:
		Matrix();
		~Matrix();
		void set_filas(int f);
		int get_filas();
		void set_col(int _c);
		int get_col();
		void cargar();
		void mostrar();
		int mayorelemento();
		float promedio();
	};
