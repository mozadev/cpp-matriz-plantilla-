#include<iostream>
#include<locale.h>
#include <conio.h>
#include <math.h>

using namespace std;

void IngresaDatos(int N, int M, string** Matriz)
{
	for (int i = 0; i < N; i++)
		for (int j = 0; j < M; j++)
		{
			cout << "Ingrese nombre y apellidos " << i + 1 << "," << j + 1 << ":";
			cin >> Matriz[i][j];
		}
}
void ImprimirDatos(int N, int M, string** Matriz)
{
	cout << endl << " DATOS DE LA MATRIZ" << endl;
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
			cout << Matriz[i][j] << " ";
		cout << endl;
	}
}

int main()
{
	int N, M;
	cout << "Ingrese N ";
	N = 6;
	cout << "Ingrese M ";
	M = 4;
	string** Matriz;
	Matriz = new string * [N];
	for (int i = 0; i < N; i++)
		Matriz[i] = new string[M];
	IngresaDatos(N, M, Matriz);
	ImprimirDatos(N, M, Matriz);
	
	for (int i = 0; i < N; i++)
		delete[] Matriz[i];
	delete[] Matriz;
	_getch();
}