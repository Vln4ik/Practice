#pragma once

class rational {
private:
	int a, b;
	int NOD(int x, int y);

public:
	rational();
	rational(int a1, int b1);
	void set(int a1, int b1);
	void show();

	rational operator+(rational other);
	friend rational operator-(rational a, rational b);
	rational operator++(int);
	bool operator==(rational other);
	bool operator>(rational other);
	rational operator=(rational other);
};