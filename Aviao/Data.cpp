#include<iostream>
#include "Data.h"
using std::cout;

Data::Data(int ddia, int mmes, int aano) : dia(ddia), mes(mmes), ano(aano)
{}

void Data::print()
{
    cout << dia << '/' << mes << '/' << ano;
}