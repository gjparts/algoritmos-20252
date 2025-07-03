#include<iostream>
#include<stdexcept>
//lo siguiente se pone antes de incluir cmath para
//que vengan tambien las constantes como M_PI:
#define _USE_MATH_DEFINES
#include<cmath>
#include<algorithm>
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

/*4. Escriba una funcion que imprima un rectangulo de caracteres,
dicha funcion recibira como parametros el ancho y largo del mismo
asi como otro parametro con el caracter a usar para dibujar
dicho rectangulo.*/
void dibujarRectangulo(int ancho, int largo, char caracter){
	//las funciones void no requieren de return (es opcional)
	for( int i = 1; i <= largo; i++ ){
		for( int j = 1; j <= ancho; j++ ){
			cout << caracter;
		}
		
		cout << endl; //nuevo renglon
	}
}

/*5. Hacer una funcion que retorne el area de un circulo,
dicha funcion debera recibir el radio como parametro.
Usando sobrecarga de funciones haga que la funcion pueda
trabajar con numeros double o con numeros float.*/
double areaCirculo(double radio){
	return M_PI*pow(radio,2);
}
float areaCirculo(float radio){
	return M_PI*pow(radio,2);
}

/*6. Escriba una función llamada minimo que retorne
el menor de tres números, dicha funcion debera poder
funcionar con tres numeros enteros o con
tres numeros double o tres numeros float*/

/*cuando tenemos sobrecarga de funciones y repetimos el mismo codigo
en los metodos sobrecargados, se recomienda para optimizar el
codigo definir el algorimo en la funcion que reciba el tipo de dato
de mayor precision y mandar a llamar esta funcion desde los metodos
con tipos de menor presicion.*/
//double tiene mayor precision que int y float
double minimo(double a, double b, double c){
	if( a <= b && a <= c ) return a;
	if( b <= a && b <= c ) return b;
	if( c <= a && c <= b ) return c;
}
//reutilizar la de mayor precision en las otras dos:
int minimo(int a, int b, int c){
	//para evitar que la funcion se llame a si misma
	//hay que pasar los valores hacia el tipo de dato de la funcion
	//de mayor precision:
	double x = a, y = b, z = c;
	return minimo(x,y,z);
}
float minimo(float a, float b, float c){
	double x = a, y = b, z = c;
	return minimo(x,y,z);
}

/*7. Escriba una funcion que devuelva true si una cadena
de texto esta escrita toda en mayusculas o false si no es así.*/
bool enMayusculas(string str){
	//comparar el string enviado con su version en mayusculas
	string copia = str;
	transform(copia.begin(), copia.end(), copia.begin(), ::toupper);
	return (str == copia);
}

/*8. Escriba una funcion a la cual se le proporcione como
parametros un caracter y una cadena de texto, dicha funcion
debera devolver un entero con la posicion de la primer coincidencia
en la que fue encontrado el caracter proporcionado dentro de
la cadena de texto proporcionada, si el caracter no es
encontrado entonces devolver -1.
No tiene permitido utilizar la funcion find del string.*/
int encontrarCaracter( string str, char buscado ){
	for( int i = 0; i < str.length(); i++ ){
		if( str[i] == buscado )
			return i; //si este return ocurre entonces
					  //se termina la estructura de repeticion
					  //y se retorna la posicion i actual
	}
	//si llego aqui es porque recorrio todo el string
	//y no encontro nada:
	return -1;
}

/*9. Escriba una funcion que reciba como parametros un string y un
arreglo de string, dicha funcion debera buscar el string proporcionado
dentro arreglo, si la cadena es encontrada entonces la funcion
retornara un numero entero con la posicion de la primer
coincidencia en la que se encontró, si no se encuentra
nada entonces retornar -1*/











