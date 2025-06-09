#include<iostream>
using namespace std;

int main(){
	/*Caza de errores (try-catch)
	El bloque try-catch permite decidir que se hará
	cuando ocurra un exception de tipo throw.*/
	//hacer un programa un lea un string y lo convierta a entero
	//en caso de fallar indicar que lo leido no es un numero entero
	//en caso de exito imprimir el numero entero obtenido en la conversion
	
	try{
		//bloque de codigo propenso a error throw
		string str;
		cout << "Digite un string para convertir a entero: ";
		getline(cin,str);
		cout << "La conversion es: " << stoi(str) << endl;
	}catch(exception ex){
		//lo que va a pasar en caso de suceder un throw
		cout << "Lo leido no es un numero entero." << endl;
	}
	
	
	return 123;
}



