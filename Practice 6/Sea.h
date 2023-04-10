#pragma once
#include <iostream>
#include <string>
#include "Union.h"
#include "Ocean.h"

class Sea : public Union{
protected:
	Ocean* parent;
public:
	Sea();
	Sea(std::string nm, std::string loc);
	Sea(std::string nm, std::string loc, Ocean* parent);
	Sea(std::string nm, std::string loc, double sz, double dp);
	Sea(std::string nm, std::string loc, double sz, double dp, Ocean* parent);

	friend std::istream& operator<<(std::istream& stream, Sea& obj);

	void setParent(Ocean _parent);
	Ocean* getParent();
};
