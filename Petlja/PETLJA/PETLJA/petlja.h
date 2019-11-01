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
		std::vector<float> HarmonijskiPi(const int n) const;
		double SumaReda(const int n) const;
		int Ruter(const std::vector<int>) const;
		int PopunjavanjePraznina(const std::vector<int>) const;
		int Duplikati(const std::vector<int>) const;
		int NeupareniElement(const std::vector<int>) const;
		std::vector<int> CikCakSelekcija(std::vector<int>) const;
		int BrojRazlicitihDuzinaDuzi(const std::vector<double>) const;
		int NajbrojnijiPresekIntervala(const std::vector<int>) const;
		int ZbirMinimumaTrojki(const std::vector<int>) const;
	};
};

