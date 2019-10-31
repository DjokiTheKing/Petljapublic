#include <iostream>
#include "petlja.h"

int main() {
	petlja::NapredniNivo pn;
	int n; std::cin >> n; std::vector<int> v(n);
	for (int i = 0; i < n; i++)
		scanf_s("%d", &v[i]);
	for (auto i : pn.CikCakSelekcija(v))
		printf("%d\n", i);
	system("pause");
}