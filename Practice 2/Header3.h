#pragma once
class figure
{
private:
	float x1, float x2, float x3, float x4;
	float y1, float y2, float y3, float y4;
	float S, float P;
public:
	void define(float X1, float X2, float X3, float X4, float Y1, float Y2, float Y3, float Y4)
	{
		x1 = X1;
		x2 = X2;
		x3 = X3;
		x4 = X4;
		y1 = Y1;
		y2 = Y2;
		y3 = Y3;
		y4 = Y4;

		P = dist(X1, Y1, X2, Y2) + dist(X2, Y2, X3, Y3) + dist(X3, Y3, X4, Y4) + dist(X4, Y4, X1, Y1);
		S = 0.5 * sin(angleBP(X1, Y1, X3, Y3, X2, Y2, X4, Y4) / (180 / PI)) * dist(X1, Y1, X3, Y3) * dist(X2, Y2, X4, Y4);
	}
	figure(float x1, float x2, float x3, float x4, float y1, float y2, float y3, float y4);
	void show(float x1, float x2, float x3, float x4, float y1, float y2, float y3, float y4);
	bool is_prug(float x1, float x2, float x3, float x4, float y1, float y2, float y3, float y4);
	bool is_square(float x1, float x2, float x3, float x4, float y1, float y2, float y3, float y4, float S);
	bool is_romb(float x1, float x2, float x3, float x4, float y1, float y2, float y3, float y4);
	bool is_in_circle(float x1, float x2, float x3, float x4, float y1, float y2, float y3, float y4);
	bool is_out_circle(float x1, float x2, float x3, float x4, float y1, float y2, float y3, float y4);
};
