#include <iostream>
#include <locale>
#include "rational.h"

int main()
{
	setlocale(LC_ALL, "");
	int n;
	std::cout << "Введите количество дробей: ";
	std::cin >> n;
	rational* arr = new rational[n];
	for (int i = 0; i < n; i++) {
		int a, b;
		std::cout << "Введите числитель и знаменатель дроби " << i + 1 << ": ";
		std::cin >> a >> b;
		arr[i].set(a, b);
	}
	for (int i = 0; i < n; i++) {
		arr[i].show();
		std::cout << std::endl;
	}
	delete[] arr;
	return 0;
}