#include<iostream>
#include<cstdlib>
#include "Aviao.h"

double Aviao::calcPeso()
{
    return asa*turbina;
}

double Aviao::calcEspPecorridoM(double tempo)
{
    return tempo*vmax + 1/2*amax*amax*tempo;
}
