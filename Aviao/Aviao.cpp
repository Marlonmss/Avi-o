#include<iostream>
#include "Aviao.h"
using std::cout;
using std::cin;
using std::endl;

Aviao::Aviao() : power(0), decola(0), voa(0) 
{}

Aviao::Aviao(string tipo)
{
	cout << "O aviao e do tipo: " << tipo << endl;
	power = 0;
	decola = 0;
	voa = 0;
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