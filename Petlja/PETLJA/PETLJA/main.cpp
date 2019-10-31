#include <iostream>
#include "petlja.h"

int main() {
	petlja::NapredniNivo pn;
	int n; std::cin >> n; std::vector<double> v(n*6);
	for (int i = 0; i < n*6; i++)
		scanf_s("%lf", &v[i]);
	printf("%d", pn.BrojRazlicitihDuzinaDuzi(v));
	system("pause");
}