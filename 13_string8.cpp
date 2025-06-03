#include<iostream>
using namespace std;

int main(){
	/*Bug que ocurre cuando se viene de
	capturar un tipo de dato primitivo y
	luego se quiere leer un string en
	la consola del sistema en Windows.*/
	
	int n;
	string str;
	
	cout << "Digite un entero: ";
	cin >> n;
	//cuando viene de leer un dato primitivo con cin y luego va a ejecutar un getline
	//hacia cin; entonces debe vaciar el buffer de entrada por medio de la funcion ignore():
	cin.ignore();
	cout << "Digite un string: ";
	getline(cin,str);
	
	cout << "El valor de n es " << n << endl;
	cout << "El valor de str es " << str << endl;
	
	return 876;
}
