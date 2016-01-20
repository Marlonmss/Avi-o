#ifndef AVIAO_H
#define AVIAO_H

class Aviao
{
    public:
        double calcPeso();
        double calcEspPecorrido(double tempo);

    private:
        double asa;
        double turbina;
        double vmax;
        double amax;
};

#endif // AVIAO_H
