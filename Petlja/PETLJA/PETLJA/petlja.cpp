#include "petlja.h"

petlja::petlja()
{
}

petlja::~petlja()
{
}

double petlja::factorial(int n) {
	double sum = 1;
	while (n > 0) {
		sum *= n;
		n--;
	}
	return sum;
}

std::vector<float> petlja::NapredniNivo::HarmonijskiPi(int n)
{
	std::vector<float> v;
	float sum = 0, eeeh = 1, eh = 2;
	for (int i = 0; i < n; i++) {
		sum += 1 / eeeh;
		eeeh += eh;
		eeeh = -eeeh;
		eh = -eh;
		v.push_back(sum * 4);
	}
	v.insert(v.begin(), v.back());
	return v;
}

double petlja::NapredniNivo::SumaReda(int n)
{
	double sum = 1;
	for (int i = 1; i <= n; i++)
		sum += double(pow(-1, i)) / factorial(i);
	return sum;
}

int petlja::NapredniNivo::Ruter(std::vector<int> v)
{
	std::vector<int> s(v.size(),0);
	for (int i = 0; i < int(v.size()); i++)
		for (int j = 0; j < int(v.size()); j++)
			s[i] += abs(i - j)*v[j];
	return *std::min_element(s.begin(), s.end());
}

int petlja::NapredniNivo::PopunjavanjePraznina(std::vector<int> v)
{
	int maxn = 0,s = 0,maxpos = int(std::distance(v.begin(), std::max_element(v.begin(), v.end())));
	for (int i = 0; i < maxpos + 1; i++) {
		if (maxn > v[i]) {
			s += abs(v[i] - maxn);
		}
		else {
			maxn = v[i];
		}
	}
	for (int i = int(v.size()) - 1,maxn = 0; i > maxpos; i--) {
		if (maxn > v[i]) {
			s += abs(v[i] - maxn);
		}
		else {
			maxn = v[i];
		}
	}
	return s;
}

int petlja::NapredniNivo::Duplikati(std::vector<int> v)
{
	int b = 0, c = 0;
	for (int i = 0; i < int(v.size()); i++) {
		for (int j = i - 1; j >= 0; j--)
			if (v[i] == v[j]) {
				c = 1;
			}
		if (!c)
			b++;
		c = 0;
	}
	return b;
}

int petlja::NapredniNivo::NeuparemiElement(std::vector<int>v)
{
	std::vector<int> s(*std::max_element(v.begin(), v.end()));
	for (int i = 0; i < int(v.size()); i++)
		s[v[i]-1]++;
	return int(std::distance(s.begin(),std::find(s.begin(),s.end(),1))+1);
}

std::vector<int> petlja::NapredniNivo::CikCakSelekcija(std::vector<int>v)
{
	std::vector<int> s(v.size()); int q = 0, e = int(v.size() - 1);
	std::sort(v.begin(), v.end());
	for (int i = 0; i < int(v.size()); i++) {
		if (!(i % 2)) {
			s[q] = v[i];
			q++;
		}
		else {
			s[e] = v[i];
			e--;
		}
	}
	return s;
}

int petlja::NapredniNivo::BrojRazlicitihDuzinaDuzi(std::vector<double>v)
{
	std::vector<double> len;
	for (int i = 0; i < (int(v.size() / 6)); i++) {
		len.push_back(((v[i*6] - v[i*6+3])*(v[i * 6] - v[i * 6 + 3]) + (v[i * 6 + 1] - v[i * 6 + 4])*(v[i * 6 + 1] - v[i * 6 + 4]) + (v[i * 6 + 2] - v[i * 6 + 5])*(v[i * 6 + 2] - v[i * 6 + 5])));
	}
	int b = 0, c = 0;
	for (int i = 0; i < int(len.size()); i++) {
		for (int j = i - 1; j >= 0; j--)
			if (len[i] == len[j]) {
				c = 1;
			}
		if (!c)
			b++;
		c = 0;
	}
	return b;
}
