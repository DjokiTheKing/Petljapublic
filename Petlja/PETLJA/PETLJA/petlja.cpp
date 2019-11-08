#include "petlja.h"

double petlja::factorial(int n) {
	double sum = 1;
	while (n > 0) {
		sum *= n;
		n--;
	}
	return sum;
}

std::vector<float> petlja::NapredniNivo::HarmonijskiPi(const int n) const
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

double petlja::NapredniNivo::SumaReda(const int n) const
{
	double sum = 1;
	for (int i = 1; i <= n; i++)
		sum += double(pow(-1, i)) / factorial(i);
	return sum;
}

int petlja::NapredniNivo::Ruter(const std::vector<int> v) const
{
	std::vector<int> s(v.size(),0);
	for (int i = 0; i < int(v.size()); i++)
		for (int j = 0; j < int(v.size()); j++)
			s[i] += abs(i - j)*v[j];
	return *std::min_element(s.begin(), s.end());
}

int petlja::NapredniNivo::PopunjavanjePraznina(const std::vector<int> v) const
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

int petlja::NapredniNivo::Duplikati(const std::vector<int> v) const
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

int petlja::NapredniNivo::NeupareniElement(const std::vector<int>v) const
{
	std::vector<int> s(*std::max_element(v.begin(), v.end()));
	for (int i = 0; i < int(v.size()); i++)
		s[v[i]-1]++;
	return int(std::distance(s.begin(),std::find(s.begin(),s.end(),1))+1);
}

std::vector<int> petlja::NapredniNivo::CikCakSelekcija(std::vector<int>v) const
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

int petlja::NapredniNivo::BrojRazlicitihDuzinaDuzi(const std::vector<double>v) const
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

int petlja::NapredniNivo::NajbrojnijiPresekIntervala(const std::vector<int>v) const
{
	std::vector<int>s(*std::max_element(v.begin(),v.end()));
	for (int i = 0; i < int(v.size()) / 2;i++) {
		for (int j = v[i * 2]; j < v[i * 2 + 1]; j++)
			s[j]++;
	}
	return *std::max_element(s.begin(),s.end());
}

int petlja::NapredniNivo::ZbirMinimumaTrojki(std::vector<int>v) const
{
	std::vector<int> t; int min,s = 0;
	for (int i = 0; i < int(v.size()); i++) {
		for (int j = i + 1; j < (int(v.size()) - 1); j++) {
			t.clear();
			min = v[i] < v[j] ? v[i] : v[j];
			auto it = std::find_if(std::begin(v)+j+1, std::end(v), [min](int i) {return i < min; });
			while (it != std::end(v)) {
				t.push_back(*it);
				it = std::find_if(std::next(it), std::end(v), [min](int i) {return i < min; });
			}
			s += min *int(v.size()-t.size()-j-1) + std::accumulate(t.begin(),t.end(),0);
		}
	}
	return s%1000000;
}

int petlja::OsnovniNivo::Trening(int d, int s) const
{
	return 0;
}

int petlja::OsnovniNivo::ListPapira(int V, int S) const
{
	return 0;
}

float petlja::OsnovniNivo::Stolnjak(float P) const
{
	return 0.0f;
}

float petlja::OsnovniNivo::RastojanjeTacaka(std::vector<float>v) const
{
	return 0.0f;
}

std::vector<float> petlja::OsnovniNivo::PravougaonikDatNaspramnimTemenima(std::vector<int>v) const
{
	return std::vector<float>();
}

double petlja::OsnovniNivo::PovrsinaTrouglaDatihTemena(std::vector<double>v) const
{
	return 0.0;
}

int petlja::OsnovniNivo::FudbalskiTeren(int d, int s, int r) const
{
	return 0;
}

float petlja::OsnovniNivo::NivoBazena(float n, float a, float b, float c) const
{
	return 0.0f;
}

std::vector<float> petlja::OsnovniNivo::TrogugaoOdredjenPravomIKoordinatnimPocetkom(float a, float b) const
{
	return std::vector<float>();
}

float petlja::OsnovniNivo::Putovanje(float v, float s) const
{
	return 0.0f;
}

std::vector<float> petlja::OsnovniNivo::Biciklista(float V0, float a) const
{
	return std::vector<float>();
}

float petlja::OsnovniNivo::SustizanjeAutomobila(float v1, float v2, float t) const
{
	return 0.0f;
}

float petlja::OsnovniNivo::RastojanjeKuca(float v1, float v2, float t, float d) const
{
	return 0.0f;
}

float petlja::OsnovniNivo::Kolona(float d, float V, float Vk) const
{
	return 0.0f;
}

float petlja::OsnovniNivo::BracaIPas(float d, float V1, float V2, float Vp) const
{
	return 0.0f;
}

int petlja::Takmicenja::Trotoar(int a[3])
{
	int min = a[0] * a[1] * a[2];
	if ((a[0] * a[1] + a[2]) < min)
		min = (a[0] * a[1] + a[2]);
	if ((a[0] + a[1] + a[2]) < min)
		min = (a[0] + a[1] + a[2]);
	if ((a[0] + a[1] * a[2]) < min)
		min = (a[0] + a[1] * a[2]);
	return min;
}

int petlja::Takmicenja::PapirKamenMakaze(std::vector<unsigned int> v)
{
	std::vector<unsigned int> t;
	for (auto i : v) t.push_back(i);
	if (v[5] * 2 >= v[0])
	{
		v[5] -= int(v[0] / 2);
		v[0] -= int(v[0] / 2) * 2;
	}
	else {
		v[0] -= v[5] * 2;
		v[5] = 0;
	}
	if (v[3] * 2 >= v[1])
	{
		v[3] -= int(v[1] / 2);
		v[1] -= int(v[1] / 2) * 2;
	}
	else {
		v[1] -= v[3] * 2;
		v[3] = 0;
	}
	if (v[4] * 2 >= v[2])
	{
		v[4] -= int(v[2] / 2);
		v[2] -= int(v[2] / 2) * 2;
	}
	else {
		v[2] -= v[4] * 2;
		v[4] = 0;
	}

	if (v[3] > 0 && v[0] > 0) {
		if (v[3] >= v[0]) {
			v[3] -= v[0];
			v[0] = 0;
		}
		else if (v[3] < v[0]) {
			v[0] -= v[3];
			v[3] = 0;
		}
	}
	if (v[4] > 0 && v[1] > 0) {
		if (v[4] >= v[1]) {
			v[4] -= v[1];
			v[1] = 0;
		}
		else if (v[4] < v[1]) {
			v[1] -= v[4];
			v[1] = 0;
		}
	}
	if (v[5] > 0 && v[2] > 0) {
		if (v[5] >= v[2]) {
			v[5] -= v[2];
			v[2] = 0;
		}
		else if (v[5] < v[2]) {
			v[2] -= v[5];
			v[5] = 0;
		}
	}

	if (v[0] > 0 && v[4] > 0) {
		if (v[0] * 2 <= v[4]) {
			v[4] -= v[0] * 2;
			v[0] = 0;
		}
		else if (v[0] * 2 > v[4]) {
			v[0] -= int(v[4] / 2);
			v[4] = 0;
		}
	}
	if (v[1] > 0 && v[5] > 0) {
		if (v[1] * 2 <= v[5]) {
			v[5] -= v[1] * 2;
			v[1] = 0;
		}
		else if (v[1] * 2 > v[5]) {
			v[1] -= int(v[5] / 2);
			v[5] = 0;
		}
	}
	if (v[2] > 0 && v[3] > 0) {
		if (v[2] * 2 <= v[3]) {
			v[2] -= v[3] * 2;
			v[2] = 0;
		}
		else if (v[2] * 2 > v[3]) {
			v[2] -= int(v[3] / 2);
			v[3] = 0;
		}
	}

	if (v[0] == 1 && v[5] > 0)
		v[0] = 0;
	if (v[1] == 1 && v[3] > 0)
		v[1] = 0;
	if (v[2] == 1 && v[4] > 0)
		v[2] = 0;

	return (std::accumulate(t.begin(), t.begin() + 3, 0) - std::accumulate(v.begin(), v.begin() + 3, 0));
}

long long petlja::Takmicenja::Krompir(std::vector<std::vector<int>> v, int n)
{
	long long s = 0;
	int s1 = 0, s2 = 0;
	std::vector<bool> v1(n * 2);
	for (int i = 0; i < v.size(); i++) {
		if (!v1[v[i][0] - 1]) {
			v1[v[i][0] - 1] = 1;
			s1++;
			s += n - s2;
		}
		if (!v1[v[i][1] - 1 + n]) {
			v1[v[i][1] - 1 + n] = 1;
			s2++;
			s += n - s1;
		}
	}
	return s;
}

int petlja::Takmicenja::Raketa(int a[4])
{
	int c,e,pmx,ps,pn1,pn2;
    pmx = int(std::distance(a,std::max_element(a,a+4)));
    ps = 3-pmx;
    switch(ps){
		case 0:
			pn1 = 1;pn2 = 2;
			break;
        case 3:
			pn1 = 1;pn2 = 2;
            break;
        case 1:
            pn1 = 0;pn2 = 3;
            break;
        case 2:
            pn1 = 0;pn2 = 3;
            break;
		default:
			pn1 = 0; pn2 = 0;
    }
    e = a[pmx]-a[ps];
    a[ps]+=e;
    c = a[pn1]>a[pn2] ? a[pn1]-a[pn2]:a[pn2]-a[pn1];
    if(a[pn1]<a[pn2]){
		if(e>c){
			e-=c;
            a[pn1]+=c;
        }else{
			a[pn1]+=e;
            e=0;
        }
    }else{
        if(e>c){
            e-=c;
            a[pn2]+=c;
        }else{
            a[pn2]+=e;
            e=0;
        }
    }
    a[pn2] += int(e/2);
    a[pn1] += e - int(e/2);
    return *std::max_element(a,a+4)-*std::min_element(a,a+4);
}

int petlja::Takmicenja::PrvaCifra(int A, int B)
{
	int S;
	int n1 = int(A / pow(10, (int(log10(A))))), n2 = int(B / pow(10, (int(log10(B)))));
	if (n1 > n2) {
		S = A;
	}
	else if (n1 < n2) {
		S = B;
	}
	else {
		S = std::max(A, B);
	}
	return S;
}
