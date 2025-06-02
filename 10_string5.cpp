#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	//Transformar un string a mayusculas o minusculas
	string str;
	cout << "Digite un string: ";
	getline(cin,str);
	//transformar a mayusculas:
	transform(str.begin(),str.end(),str.begin(), ::toupper );
	cout << "El valor de str es: " << str << endl;
	
	//transformar a minusculas:
	transform(str.begin(),str.end(),str.begin(), ::tolower );
	cout << "El valor de str es: " << str << endl;
	
	//el problema de transform es que altera a la variable original
	//para evitarlo podemos establecer una variable diferente para la salida
	string str2, copia;
	cout << "Digite str2: ";
	getline(cin,str2);
	
	//hacer una copia de str2
	copia = str2;
	//trabajar sobre la copia
	transform(copia.begin(),copia.end(),copia.begin(), ::toupper );
	
	cout << "El valor de str2 es: " << str2 << endl;
	cout << "El valor de copia es: " << copia << endl;
	
	return 765;
}














