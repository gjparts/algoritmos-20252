#include<iostream>
#include<ctime>
#include<cmath>
using namespace std;

int main(){
	cout << "La hora del PC en milisegundos: " << time(NULL) << endl;
	/*Generacion de numeros al azar usando la hora como semilla (seed)*/
	//inicializar el generador de numeros aleatorios con la hora como semilla:
	srand( time(NULL) );
	
	//generar un numero al azar entre 7 y 39
	int n = rand()%(39-7+1)+7;
	cout << n << endl;
	
	//generar 10 umeros al azar entre 8 y 71
	cout << "*******************" << endl;
	for( int i = 1; i <= 10; i++ )
		cout << rand()%(71-8+1)+8 << endl;
		
	//rand()%(MAX-MIN+1)+MIN
	
	return 123;
}
