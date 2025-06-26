#include<iostream>
#include "funciones.h" //si el archivo a incluir esta 
                       //en un folder determinado se usa comillas dobles
using namespace std;

int main(){
	/*Sobrecarga de funciones o metodos: (function overload, method overload)
	son funciones que se llaman igual; pero tienen diferentes firmas.*/
	cout << sumar(1,3) << endl;
	cout << sumar(2,5,7) << endl;
	cout << sumar(4.5f,2.4f) << endl;
	cout << restar(3.2,1.1) << endl;
	
	//cuando una funcion tiene guard clauses y es propensa a
	//lanzar una excepcion, esta debe ir en un bloque try-catch
	try{
		cout << dividir(5.0,2.0) << endl;	
		cout << dividir(3.0,0) << endl;
	}catch(exception &ex){
		cout << ex.what() << endl;
	}
	//observe que para extraer el mensaje de error de una excepcion
	//debe colocar un ampersand & a la izquierda del objeto ex
	//y luego al imprimir ejecuta la funcion what() de ex
	
	
	return 777;
}
