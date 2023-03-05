#include <iostream>
#include <locale>
#include "../Задача 2/rational.h"

int main()
{
	setlocale(LC_ALL, "");
	int n;
	std::cout << "Введите количество дробей(2 дроби и более): ";
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

	rational sum;
	for (int i = 0; i < n; i++) {
		sum = sum + arr[i];
	}
	std::cout << "Сумма дробей: ";
	sum.show();
	std::cout << std::endl;

	rational diff = arr[0] - arr[1];
	std::cout << "Разность дробей: ";
	diff.show();
	std::cout << std::endl;

	std::cout << "Инкремент: ";
	arr[0]++;
	arr[0].show();
	std::cout << std::endl;

	std::cout << "Сравнение дробей: ";
	if (arr[0] > arr[1]) std::cout << "Первая дробь больше второй.";
	else if (arr[0] == arr[1]) std::cout << "Первая дробь равна второй.";
	else std::cout << "Первая дробь меньше второй.";

	arr[0] = arr[1];
	std::cout << std::endl << "Присваивание: ";
	arr[0].show();
	std::cout << std::endl;

	delete[] arr;
	return 0;
}