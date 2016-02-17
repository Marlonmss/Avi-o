#include<iostream>
#include<cstdlib>
#include "Aviao.h"
#include "Data.h"
#include<string>
using std::cout;
using std::cin;
using std::endl;

int main()
{
    cout << "Digite o dia, o mes e o ano: ";
    cin >> d >> m >> a;
    Aviao::atualizarSoftware(Aviao::datasoftware(d,m,a));
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
    cout << endl;
	
	system("pause");
	return 0;
}