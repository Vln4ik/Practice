#pragma once

class tringle{
private:
	float a, b, c;
public:
	bool exst_tr(double a, double b, double c);
	void set(double a1, double b1, double c1);
	void show(double a, double b, double c);
	double perimetr(double a, double b, double c);
	double square(double a, double b, double c);
};
