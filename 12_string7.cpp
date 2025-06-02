#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	/*Haga un programa que pida ingresar dos string, un vez leidos estos
	string el programa va a decir si son iguales o si son diferentes;
	pero ignorando mayusculas y minusculas, sin alterar los string leidos.*/
	string a,b;
	cout << "Digite un string: ";
	getline(cin,a);
	cout << "Digite otro string: ";
	getline(cin,b);
	
	string cpA = a, cpB = b;
	//aplicar las transformaciones a las copias para no afectar a los originales
	transform(cpA.begin(),cpA.end(),cpA.begin(),::toupper);
	transform(cpB.begin(),cpB.end(),cpB.begin(),::toupper);
	
	//comparar las copias transformadas a mayusculas para ignorar el casing
	if( cpA == cpB )
		cout << "ambos string son iguales ignorando mayusculas/minusculas.";
	else
		cout << "ambos string no son iguales ignorando mayusculas/minusculas.";
	
	cout << endl;
	cout << "valor de a: " << a << endl;
	cout << "valor de b: " << b << endl;
	
	return 456;
}





