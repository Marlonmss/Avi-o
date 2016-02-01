#ifndef AVIAO_H
#define AVIAO_H
#include<string>
using std::string;

class Aviao
{
	public:
        Aviao();
		Aviao(string tipo);
		void ligar();
		void decolar();
		void voar(const double &alt);
	private:
		bool power;
		bool decola;
		bool voa;
		string tip;
};

#endif // AVIAO_H