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
		std::vector<float> HarmonijskiPi(int n);
		double SumaReda(int n);
		int Ruter(std::vector<int>);
		int PopunjavanjePraznina(std::vector<int>);
		int Duplikati(std::vector<int>);
		int NeuparemiElement(std::vector<int>);
		std::vector<int> CikCakSelekcija(std::vector<int>);
	};
};

