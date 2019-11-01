#pragma once

#include <vector>
#include <cmath>
#include <algorithm>

class petlja
{
	static double factorial(int);

public:
	petlja();
	~petlja();
	class NapredniNivo {
	public:
		std::vector<float> HarmonijskiPi(int n) const;
		double SumaReda(int n) const;
		int Ruter(std::vector<int>) const;
		int PopunjavanjePraznina(std::vector<int>) const;
		int Duplikati(std::vector<int>) const;
		int NeupareniElement(std::vector<int>) const;
		std::vector<int> CikCakSelekcija(std::vector<int>) const;
		int BrojRazlicitihDuzinaDuzi(std::vector<double>) const;
		int NajbrojnijiPresekIntervala(std::vector<int>) const;
	};
};

