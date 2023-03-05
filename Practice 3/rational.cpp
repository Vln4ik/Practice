#include "rational.h"
#include <iostream>

int rational::NOD(int a, int b)
{
	if (b == 0) return a;
	return NOD(b, a % b);
}

rational::rational() {
	a = 0; b = 1;
}

rational::rational(int a1, int b1) {
	a = a1; b = b1;
	if (b == 0) {
		std::cout << "Знаменатель не может быть равен нулю." << std::endl;
		a = 0; b = 1;
		return;
	}
	int nod = NOD(a, b);
	a /= nod;
	b /= nod;

	if (a >= b) {
		a = a % b;
	}
}

void rational::set(int a1, int b1)
{
	if (b1 == 0) {
		std::cout << "Знаменатель не может быть равен нулю." << std::endl;
		return;
	}
	int nod = NOD(a1, b1);
	a = a1 / nod;
	b = b1 / nod;

	if (a >= b) {
		a = a % b;
	}
}

void rational::show()
{
	std::cout << a << "/" << b;
}

rational rational::operator+(rational other)
{
	rational result;
	result.a = a * other.b + b * other.a;
	result.b = b * other.b;
	int nod = NOD(result.a, result.b);
	result.a /= nod;
	result.b /= nod;
	return result;
}

rational rational::operator++(int)
{
	rational result = *this;
	a += b;
	int nod = NOD(a, b);
	a /= nod;
	b /= nod;
	return result;
}

bool rational::operator==(rational other)
{
	return (a == other.a && b == other.b);
}

bool rational::operator>(rational other)
{
	return (a * other.b > b * other.a);
}

rational rational::operator=(rational other)
{
	a = other.a;
	b = other.b;
	return *this;
}

rational operator-(rational a, rational b)
{
	rational result;
	result.a = a.a * b.b - a.b * b.a;
	result.b = a.b * b.b;
	int nod = result.NOD(result.a, result.b);
	result.a /= nod;
	result.b /= nod;
	return result;
}