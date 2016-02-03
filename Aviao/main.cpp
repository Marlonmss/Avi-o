#include<iostream>
#include<cstdlib>
#include "Aviao.h"
#include<string>
using std::cout;
using std::cin;
using std::endl;

int main()
{
    double alt;
	string tipo;
	cout << "Digite o tipo do aviao: " << endl;
	cin >> tipo;
	Aviao A(tipo);
	A.ligar();
	A.decolar();
	cout << "Digite a altitude maxima que o aviao voara: ";
	cin >> alt;
	A.voar(alt);
	
	system("pause");
	return 0;
}