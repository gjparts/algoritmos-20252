#include<iostream>
using namespace std;

int main(){
	//comparar dos string en C++
	//No se ignorara mayusculas y minusculas
	string str1, str2;
	cout << "Digite str1: ";
	getline(cin,str1);
	cout << "Digite str2: ";
	getline(cin,str2);
	
	if( str1 == str2 )
		cout << "ambos string son iguales";
	else
		cout<< "ambos string NO son iguales";
		
	cout << endl;
	
	return 111;
}
