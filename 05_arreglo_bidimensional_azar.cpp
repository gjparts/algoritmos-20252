#include<iostream>
#include<ctime>
#include<cmath>
using namespace std;

int main(){
	/*Hacer un programa que tenga un arreglo bi-dimensional de numeros
	enteros de 5x8.
	Llenar cada elementos del arreglo con un numero al azar entre
	-7 y 33. No importa que se repita numeros.
	Al finalizar imprima dicho arreglo en formato tabular.*/
	srand( time(NULL) );
	int arr[5][8];
	
	for( int i = 0; i < end(arr)-begin(arr); i++ ){
		for( int j = 0; j < end(arr[i])-begin(arr[i]); j++ ){
			arr[i][j] = rand()%(33-(-7)+1)+(-7);
			//arr[i][j] = rand()%(33+7+1)-7;
			//arr[i][j] = rand()%(41)-7;
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
	
	return 789;
}
