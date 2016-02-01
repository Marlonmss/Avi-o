#ifndef AVIAO_H
#define AVIAO_H
#include<string>
using std::string;

class Aviao
{
	public:
        	Aviao();
		Aviao(string tip);
		void ligar();
		void decolar();
		void voar(const double &alt);
	private:
		bool power;
		bool decola;
		bool voa;
		string tipo;
};

#endif // AVIAO_H
