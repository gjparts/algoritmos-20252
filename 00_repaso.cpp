#include<iostream>
using namespace std;

int main(){
	//cout = console out
	cout << "Hola a todos" << endl;
	//cin = console in
	int x;
	cout << "Digite por favor un entero: ";
	cin >> x;
	cout << "El numero leido es " << x << endl;
	
	double a,b,c;
	cout << "Digite tres numeros separados por espacios: ";
	cin >> a >> b >> c;
	cout << "valor de a: " << a << endl;
	cout << "valor de b: " << b << endl;
	cout << "valor de c: " << c << endl;
	
	//ejecutar comandos del sistema operativo
	system("pause"); //hace una pausa en el programa de consola
	//limpiar la pantalla:
	system("cls"); //clear es para linux y mac
	
	//mostrar todos los archivos en la unidad C:
	system("dir C:\\");
	//ejecutar chrome en la pagina de califik.com
	system("start chrome www.califik.com");
	
	return 777;
}
