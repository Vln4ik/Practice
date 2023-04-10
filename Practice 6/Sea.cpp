#include <iostream>
#include <string>
#include "Sea.h"

Sea::Sea() {
	Union();
	parent = nullptr;
}

Sea::Sea(std::string nm, std::string loc) {
	name = nm;
	location = loc;
	size = deep = 0;
	parent = nullptr;
}

Sea::Sea(std::string nm, std::string loc, Ocean* _parent) {
	name = nm;
	location = loc;
	size = deep = 0;
	parent = _parent;
}

Sea::Sea(std::string nm, std::string loc, double sz, double dp) {
	name = nm;
	location = loc;
	size = sz;
	deep = dp;
	parent = nullptr;
}

Sea::Sea(std::string nm, std::string loc, double sz, double dp, Ocean* _parent) {
	name = nm;
	location = loc;
	size = sz;
	deep = dp;
	parent = _parent;
}

std::ostream& operator<<(std::ostream& stream, Sea& obj)
{
	stream << "Âèä âîäîåìà - ìîðå\n";

	std::string parentName;

	if (obj.parent)
	{
		parentName = obj.parent->getName();
	}
	else
	{
		parentName = "Âíóòðåííåå ìîðå";
	}

	stream << "Â êàêîì îêåàíå íàõîäèòñÿ - " << parentName << '\n';
	obj.Print();
	return stream;
}

void Sea::setParent(Ocean _parent)
{
	parent = &_parent;
}

Ocean* Sea::getParent()
{
	return parent;
}
