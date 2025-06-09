#include<iostream>
using namespace std;

int main(){
	/*Conversiones
	En la libreria standard (std) vienen varias funciones
	para convertir entre tipos, las mas populares son:
	stoi	string to int (string a entero)
	stod	string to double
	stof	string to float
	stol	string to long
	stoll	string to long long
	to_string	de cualquier numero a string*/
	
	//string a entero
	string str = "75.65";
	int e1 = stoi(str); //conversion (se trunca la parte decimal)
	cout << "str: " << str << endl;
	cout << "e1: " << e1 << endl;
	
	//si el entero no se puede convertir, ocurre una excepcion
	//por lo tanto crashea el programa
	//str = "sistemas";
	//e1 = stoi(str);
	
	//si el string comienza con numeros y luego tiene letras
	//estas se truncan
	str = "550xyz";
	e1 = stoi(str);
	cout << "str: " << str << endl;
	cout << "e1: " << e1 << endl;
	
	//string a double
	str = "2.56789qwerty";
	double d1 = stod(str);
	cout << "str: " << str << endl;
	cout << "d1: " << d1 << endl;
	
	//string a float
	str = "3.1416";
	float f1 = stof(str);
	cout << "str: " << str << endl;
	cout << "f1: " << f1 << endl;
	
	str = "12341234";
	long l1 = stol(str); //long soporta numeros de hasta 64 bit (8 byte)
	cout << "str: " << str << endl;
	cout << "l1: " << l1 << endl;
	
	str = "1234123412345";
	long long ll1 = stoll(str); //long long soporta numeros de hasta 128 bit (16 byte)
	cout << "str: " << str << endl;
	cout << "ll1: " << ll1 << endl;
	
	//convertir cualquier numero a string
	int e2 = 89;
	float f2 = 56.7f;
	double d2 = 7.897566;
	long l2 = 1234123412;
	long long ll2 = 9999999999999;
	string s;
	s = to_string(e2);
	cout << e2 << " a string: " << s << endl;
	s = to_string(f2);
	cout << f2 << " a string: " << s << endl;
	s = to_string(d2);
	cout << d2 << " a string: " << s << endl;
	s = to_string(l2);
	cout << l2 << " a string: " << s << endl;
	s = to_string(ll2);
	cout << ll2 << " a string: " << s << endl;
	
	return 123;
}





