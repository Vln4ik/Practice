#include "eq2.h"
#include <iostream>


eq2::eq2(double a1, double b1, double c1) {
	a = a1; b = b1; c = c1;
	D = b * b - 4 * a * c;
}

eq2 eq2::operator+(eq2 other) {
	return eq2(a + other.a, b + other.b, c + other.c);
}

void eq2::set(double a1, double b1, double c1) {
	a = a1; b = b1; c = c1;
	D = b * b - 4 * a * c;
}
double eq2::find_X() {
	if (D < 0) {
		std::cout << "Корней нет" << std::endl;
		return 0;
	}
	else {
		if (D == 0) {
			std::cout << "Корень один: " << std::endl;
			double x = (-b - sqrt(D)) / (2 * a);
			std::cout << x << std::endl;
			return x;
		}
		else {
			std::cout << "Корней 2, наибольший: " << std::endl;
			double x1 = (-b - sqrt(D)) / (2 * a);
			double x2 = (-b + sqrt(D)) / (2 * a);
			if (x1 > x2) {
				std::cout << x1 << std::endl;
				return x1;
			}
			else {
				std::cout << x2 << std::endl;
				return x2;
			}
		}
	}
}
double eq2::find_Y(double x1) {
	return a * x1 * x1 + b * x1 + c;
}
double eq2::get_a()
{
	return a;
}
double eq2::get_b()
{
	return b;
}
double eq2::get_c()
{
	return c;
}
;