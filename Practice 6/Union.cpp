#include <iostream>
#include <string>
#include "Union.h"

Union::Union() {
	name = "*nm*";
	location = "*loc*";
	size = deep = 0;
}

Union::Union(std::string nm, std::string loc) {
	name = nm;
	location = loc;
	size = deep = 0;
}

Union::Union(std::string nm, std::string loc, double sz, double dp) {
	name = nm;
	location = loc;
	size = sz;
	deep = dp;
}

void Union::Print() {
	std::cout << "Íàçâàíèå âîäî¸ìà: " << name << "\n";
	std::cout << "Ðàñïîëîæåíèå: " << location << "\n";
	std::cout << "Ðàçìåð: " << size << "\n";
	std::cout << "Ãëóáèíà: " << deep << "\n";
}

std::istream& operator>>(std::istream& stream, Union& obj) {
	std::cout << "Ââåäèòå íàçâàíèå âîäî¸ìà:\n";
	stream >> obj.name;
	std::cout << "Ââåäèòå ðàñïîëîæåíèå:\n";
	stream >> obj.location;
	std::cout << "Ââåäèòå ðàçìåð:\n";
	stream >> obj.size;
	std::cout << "Ââåäèòå ãëóáèíó:\n";
	stream >> obj.deep;
}

std::string Union::getName() {
	return name;
}
