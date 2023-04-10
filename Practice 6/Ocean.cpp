#include <iostream>
#include <string>
#include "Ocean.h"


Ocean::Ocean() {
	Union();
}

Ocean::Ocean(std::string nm, std::string loc) {
	name = nm;
	location = loc;
	size = deep = 0;
}

Ocean::Ocean(std::string nm, std::string loc, double dp, double sz) {
	name = nm;
	location = loc;
	size = sz;
	deep = dp;
}

std::ostream& operator<<(std::ostream& stream, Ocean& obj) {
	stream << "Êëàññ âîäî¸ìà - îêåàí\n";
	obj.Print();
	return stream;
}
