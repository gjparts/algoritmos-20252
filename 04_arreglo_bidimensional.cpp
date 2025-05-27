#include<iostream>
using namespace std;

int main(){
	/*Arreglo bi-dimensional
	Es un arreglo principal que apunta a otros arreglos secundarios
	ejemplo:*/
	
	int arr[5][3];
	/*
	[0]*->[0][1][2];
	[1]*->[0][1][2];
	[2]*->[0][1][2];
	[3]*->[0][1][2];
	[4]*->[0][1][2];
	
	usualmente nosotros lo visualizamos como una tabla (formato tabular)
	*/
	//declaracion de arreglos bi-dimensionales:
	//1) declarar sin inicializar:
	double arr1[6][4];
	//2) declarar prellenado o sea inicializado
	//es obligatorio definir el tamaño de cada arreglo secundario:
	int arr2[][3] = {
		{ 777, 8, 34 },
		{ 8, 90, -5 },
		{ 1, 1000, 0 },
		{ 45, 78, 63 },
		{ -43, 567, 123 }
	};
	
	//imprimir un arreglo secundario de forma tabular
	//para ello se recomienda usar dos for anidados
	//imprimir arr1:
	cout << "arr1: *************************" << endl;
	for( int i = 0; i < end(arr1)-begin(arr1); i++ ){
		for( int j = 0; j < end(arr1[i])-begin(arr1[i]); j++ ){
			cout << arr1[i][j] << "\t";
		}
		cout << endl;
	}
	//lo anterior imprime arr1 en forma de tabla, como no esta inicializado
	//problamente este lleno de datos basura.
	
	//imprimir arr2:
	cout << "arr2: *************************" << endl;
	for( int i = 0; i < end(arr2)-begin(arr2); i++ ){
		for( int j = 0; j < end(arr2[i])-begin(arr2[i]); j++ ){
			cout << arr2[i][j] << "\t";
		}
		cout << endl;
	}
	
	
	
	return 1234;
}









