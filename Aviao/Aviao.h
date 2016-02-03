#ifndef AVIAO_H
#define AVIAO_H
#include<string>
using std::string;

class Aviao
{
	public:
        Aviao();
		Aviao(const string &tipo);
        Aviao(const Aviao &Z);
		void ligar();
		void decolar();
		void voar(const double &alt);
        static bool piloto_auto;
	private:
		bool power;
		bool decola;
		bool voa;
		string tip;
};

#endif // AVIAO_H
