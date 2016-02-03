#include<iostream>
#include "Aviao.h"
using std::cout;
using std::cin;
using std::endl;

bool Aviao::piloto_auto = false;

Aviao::Aviao() : power(0), decola(0), voa(0) 
{}

Aviao::Aviao(const string &tipo)
{
	tip = tipo;
	cout << "O aviao e do tipo: " << tip << endl;
	power = 0;
	decola = 0;
	voa = 0;
}

Aviao::Aviao(const Aviao &Z)
{
    power = Z.power;
    decola = Z.decola;
    voa = Z.voa;
    tip = Z.tip;
}

void Aviao::ligar()
{
	if(!power)
	{
		cout << "O aviao esta ligado." << endl;
		power = 1;
	}
	else
		cout << "O aviao ja esta ligado." << endl;
}

void Aviao::decolar()
{
	if(!decola)
	{
		cout << "O aviao ira decolar." << endl;
		decola = 1;
	}
	else
		cout << "O aviao ja esta decolando." << endl;
	
}

void Aviao::voar(const double &alt)
{
	cout << "O aviao ira voar ate uma altitude de: " << alt << '.' << endl;
}
