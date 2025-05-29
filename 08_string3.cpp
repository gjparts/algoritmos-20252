#include<iostream>
using namespace std;

int main(){
	/*
	Hacer un programa que capture
	un string, luego lo imprime dejando
	tres asteriscos entre cada caracter
	sin afectar a la variable original.
	Ejemplo:
	
	Digite un string: Sandia
	Resultado: S***a***n***d***i***a***
	*/
	string str;
	cout << "Digite un string: ";
	getline(cin,str);
	
	for( int i = 0; i < str.length(); i++ )
		cout << str[i] << "***";
	
	cout << endl;
	
	return 345;
}



