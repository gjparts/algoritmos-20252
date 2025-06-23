//archivo de funciones
//La ventaja de tener las funciones en un archivo separado
//es que se pueden reutilizar en otros proyectos (programacion modular)
//normalmente en un proyecto de c++ los archivos de funciones
//se nombran con extension .h (header)
#include<iostream>
#include<stdexcept> //libreria para generacion de excepciones
using namespace std;

int sumar(int a, int b){
	return a+b;
}
int sumar(int a, int b, int c){
	return a+b+c;
}
float sumar(float a, float b){
	return a+b;
}
double restar(double a, double b){
	return a-b;
}
double dividir(double dividendo, double divisor){
	/*Guard clause
	instrucciones que validan los parametros de una funcion e
	impiden continuar si estas no se cumplen.*/
	if( divisor == 0 )
		throw invalid_argument("Divisor no puede ser cero.");
	
	return dividendo/divisor;
}






