#include <iostream>
#include <cmath>
#include "Header2.h"


circle::circle(float R, float x, float y) {
	this->R = R;
	this->x = x;
	this->y = y;
}
circle::circle() {
	R = 0;
	x = 0;
	y = 0;
}
void circle::set_circle(float R1, float x1, float y1) {
	this -> R = R1;
	this -> x = x1;
	this -> y = y1;
}
float circle::square() {
	float P = 3.14153;
	return P * R * R;
}
bool circle::tringle_around(float a, float b, float c) {
	float p, s;
	p = (a + b + c) / 2;
	s = sqrt(p * (p - a) * (p - b) * (p - c));
	if (a + b > c && a + c > b && b + c > a) {
		if (R == a * b * c / (4 * s)) {
			return true;
		}else {
			return false;
		}
	}
}
bool circle::tringle_in(float a, float b, float c) {
	if (a + b > c && a + c > b && b + c > a) {
		if (R == (a + b + c) / 2) {
			return true;
		}else {
			return false;
		}
	}
}
bool circle::check_circle(float x_cntr, float y_cntr) {
	R_r = sqrt((x - x_cntr) * (x - x_cntr) + (y * y_cntr) * (y - y_cntr));
	if (R == R_r) {
		return true;
	}
	else {
		return false;
	}
}
