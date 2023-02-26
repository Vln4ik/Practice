#pragma once

class circle{
private:
	float R, float x, float y;
public:
	circle(float r, float x, float y);
	circle();
	void set_circle(float x1, float y1, float R1);
	float square(float R);
	bool tringle_around(float a, float b, float c);
	bool tringle_in(float a, float b, float c);
	bool check_circle(float x_cntr, float y_cntr);
};
