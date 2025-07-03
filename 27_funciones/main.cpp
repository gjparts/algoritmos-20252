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
	
	//las funciones void (vacio) no retornan ningun valor.
	//jamas asigne el resultado de una funcion void porque al ser
	//funciones vacias no devuelven nada.
	//lo siguiente no es posible, porque quiere enviar el resultado
	//de una funcion void hacia un flujo de salida que espera un valor:
	//cout << dibujarRectangulo(20,5,'X') << endl;
	//tampoco se puede lo siguiente:
	//string cuadro = dibujarRectangulo(20,5,'X');
	//una funcion void solo se manda a llamar como subprograma:
	dibujarRectangulo(20,5,'X');
	dibujarRectangulo(5,8,'*');
	
	/*El lenguaje C++ detecta o infiere dependiendo si lleva o no
	los decimales, si lleva la letra f pues es float, si no lleva decimales
	pues es int, si lleva la letra L entonces es Long.*/
	cout << areaCirculo(6.0) << endl;
	cout << areaCirculo(6.0f) << endl;
	//lo anterior se ignora si el valor viene de una variable
	//porque nosotros estamos remarcando el tipo de dato que viene
	double radio1 = 40;
	cout << areaCirculo(radio1) << endl;
	
	cout << minimo(3,1,8) << endl;
	cout << minimo(1.7,2.6,8.7) << endl;
	cout << minimo(6.5f,9.9f,4.13453f) << endl;
	
	return 567;
}








