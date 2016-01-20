#include "Aviao.h"

Aviao::Aviao()
{
	
}

Aviao::~Aviao()
{
	
}

double Aviao::calcPeso()
{
    return asa*turbina;
}

double Aviao::calcEspPecorridoM(double tempo)
{
    return tempo*vmax + 1/2*amax*amax*tempo;
}