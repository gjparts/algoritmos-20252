#include<iostream>
#include<ctime>
#include<cmath>
using namespace std;

int main(){
	/*Realizar un programa que tenga un arreglo de numeros
	enteros de 25 posiciones. Lo deben llenar con numeros
	al azar entre 9 y 105 (puede haber numeros repetidos).
	Imprima el contenido de dicho arreglo*/
	
	srand( time(NULL) );
	
	int arreglo[25];
	for( int i = 0; i < end(arreglo)-begin(arreglo); i++ ){
		arreglo[i] = rand()%(105-9+1)+9;
		cout << arreglo[i] << endl;
	}
	
	return 123;
}
