#include<iostream>
using namespace std;

int main(){
	//string: es una coleccion de elementos char (const *char[])
	string carrera = "Ing. en Sistemas";
	cout << carrera << endl;
	
	//obtener la longitud de un string
	cout << "longitud de carrera es: " << carrera.length() << endl;
	
	//los caracteres dentro de un string en C++ se numeran de 0 a N-1
	//como sucede en los arreglos.
	//Un string en C++ permite acceder a sus elementos char muy parecido
	//a como se accede a cada elemento en un arreglo.
	cout << "El primer caracter de carrera es " << carrera[0] << endl;
	//un string en C++ no es una Clase sino una struct (estructura de datos)
	
	cout << "El noveno caracter de carrera es " << carrera[8] << endl;
	cout << "El ultimo caracter de carrera es " << carrera[ carrera.length()-1 ] << endl;
	
	//es posible reemplazar caracteres en un string:
	string fruta = "Sandia";
	fruta[1] = 'X';
	fruta[5] = '4';
	cout << fruta << endl;
	
	//importante: cada elemento char internamente contiene un valor entero
	//el cual es el numero de ese caracter en la alfabeto interno de su lenguaje.
	char c1 = 'A';
	cout << "el valor de c1 es " << c1 << endl;
	c1 = c1 + 1;
	cout << "el valor de c1 es " << c1 << endl;
	
	char cc1 = 'X', cc2 = 'Y';
	cout << cc1+cc2 << endl;
	cout << cc1 << cc2 << endl;
	cout << fruta[0]+fruta[1] << endl;
	cout << fruta[0] << fruta[1] << endl;
	
	//concatenar string con string
	string str1 = "Gerardo Portillo";
	string str2 = "UNAH";
	string str3 = "El Sr. "+str1+" se encuentra en "+str2;
	cout << str3 << endl;
	
	//concatenar string con numero
	int edad = 42;
	double estatura = 1.79;
	string str4 = "Mi edad es "+to_string(edad)+" y mido "+to_string(estatura);
	cout << str4 << endl;
	
	//tambien es posible concatenarle char a un string
	string str5 = "panda";
	str5 = str5 + 's';
	cout << str5 << endl;
	
	//otro ejemplo:
	string str6 = "san pedro sula";
	str6 += 'X';
	cout << str6 << endl;
	
	//ojo: lo siguiente es incorrecto porque concatena la suma de los char: s x a
	string str7 = "pera";
	str7 += 's' + 'x' + 'a';
	cout << str7 << endl;
	
	//lo siguiente seria la forma correcta de hacerlo
	string str8 = "manzana";
	str8 = str8 + 's' + 'x' + 'a';
	cout << str8 << endl;
	
	int a = 2;
	a += 4;
	cout << a << endl;
	a += 1+7;
	cout << a << endl;
	a += 10/5;
	cout << a << endl;
	
	return 345;
}










