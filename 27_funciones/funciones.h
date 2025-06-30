#include<iostream>
#include<stdexcept>
#include<cmath>
using namespace std;

/*1. Escriba una funcion llamada elevar que reciba
dos numeros long, uno para la base y otro para la potencia,
la funcion debe retornar un long resultado de elevar el numero
base a la potencia sin utilizar la funcion pow.
-> la potencia no puede ser un numero negativo. (guard clause)*/
long elevar(long base, long potencia){
	//guard clause:
	if( potencia < 0 )
		throw invalid_argument("potencia negativa no permitida"); //funcion termina
	
	long temporal = 1;
	for( int i = 1; i <= potencia; i++ )
		temporal = temporal * base;
	
	//cuando una funcion tiene tipo de dato debe llevar return
	return temporal;
}

/*2. Defina una funcion llamada hipotenusa que retorne
la longitud de la hipotenusa de un triángulo rectángulo,
la funcion recibira los lados de dicho triangulo.
La funcion debera funcionar con numeros double, se le permite usar sqrt() y pow().*/
double hipotenusa(double a, double b){
	return sqrt( pow(a,2)+pow(b,2) );
}

/*3. Escriba una funcion que reciba dos numeros enteros y retorne true
si el primer numero es multiplo del segundo o false en caso contrario.*/
bool esMultiplo(int a, int b){
	/*
	//forma 1: programa estructurado clasico
	if( a%b == 0 )
		return true;
	else
		return false;
	*/
	
	//forma 2: retornando el booleano de la expresion(es)
	return ( a%b == 0 );
	
	//forma 3: usando el operador ternario
	//return ( a%b == 0 ? true : false );
	
}

















