#include <iosrteam>
#include "Header1.h"
int main() {
	tringle mas[3];
	double a, b, c;
	for (int i = 0; i < 3; i++) {
		cout << "Введите a, b, c для треугольника №  " << i + 1 << " через пробел: " << endl;
		cin >> a >> b >> c;
		mas[i].set(a, b, c);
		if (!(mas[i].exst())) {
			mas[i].show();
			cout << "Треугольник с такими сторонами не существует, попробуйье еще раз" << endl;
			i--;
		}
	}
	for (int i = 0; i < 3; i++) {
		mas[i].show();
		cout << "Периметр треугольника: " << mas[i].perimeter() << endl;
		cout << "Площадь треугольника: " << mas[i]d.square() << endl;
	}
	return 0;
}
