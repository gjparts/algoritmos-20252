#include<iostream>
#include "funciones.h"
using namespace std;

int main(){
	cout << elevar(2,5) << endl;
	cout << elevar(3,2) << endl;
	cout << elevar(8,6) << endl;
	cout << elevar(8,1) << endl;
	cout << elevar(8,0) << endl;
	//si hay codigo que puede lanzar una excepcion va en bloque try-catch:
	try{
		cout << elevar(8,-3) << endl;
	}catch(exception &ex){
		cout << ex.what() << endl;
	}
	
	cout << hipotenusa(2,5) << endl;
	cout << hipotenusa(1,8) << endl;
	cout << hipotenusa(6,9) << endl;
	cout << hipotenusa(1,1) << endl;
	
	cout << esMultiplo(5,2) << endl;
	cout << esMultiplo(4,2) << endl;
	cout << esMultiplo(10,5) << endl;
	
	//en todos los lenguajes de programacion modernos si imprime
	//el resultado de una expresion de comparacion entonces
	//obtendra true o false dependiendo de si se cumple la expresion
	cout << ( 5 > 3 ) << endl; //imprime 1 o sea true
	cout << ( 5 == 5 && 1 > 2 ) << endl; //imprime 0 o sea false
	cout << ( 5 != 6 ) << endl; //imprime 1 o true
	//los booleanos se pueden sumar, true suma 1, false suma 0
	int suma = 0;
	suma = suma + ( 5 > 2 ); //suma true o 1
	cout << "suma: " << suma << endl;
	suma += ( 8 > 2 && 7 < 12 ); //suma true o 1
	cout << "suma: " << suma << endl;
	suma += (1 > 5); //suma false o 0
	cout << "suma: " << suma << endl;
	int x = 9, y = 10;
	suma = suma + ( y > x ); //suma true o 1
	cout << "suma: " << suma << endl;
	
	
	return 567;
}








