#pragma once

#include <vector>
#include <cmath>
#include <algorithm>
#include<numeric>

class petlja
{
	static double factorial(int);

public:
	petlja();
	~petlja();
	class OsnovniNivo {
	public:
		int Trening(int d, int s) const;
		int ListPapira(int V, int S) const;
		float Stolnjak(float P) const;
		float RastojanjeTacaka(std::vector <float> ) const;
		std::vector<float> PravougaonikDatNaspramnimTemenima(std::vector<int>) const;
		double PovrsinaTrouglaDatihTemena(std::vector<double>) const;
		int FudbalskiTeren(int d, int s, int r) const;
		float NivoBazena(float n, float a, float b, float c) const;
		std::vector<float> TrogugaoOdredjenPravomIKoordinatnimPocetkom(float a, float b) const;
		float Putovanje(float v, float s) const;
		std::vector<float> Biciklista(float V0, float a) const;
		float SustizanjeAutomobila(float v1, float v2, float t) const;
		float RastojanjeKuca(float v1, float v2, float t, float d) const;
		float Kolona(float d,float V,float Vk) const;
		float BracaIPas(float d,float V1,float V2,float Vp) const;
	};
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
		int ZbirMinimumaTrojki(std::vector<int>) const;
	};
};

