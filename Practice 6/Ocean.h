#pragma once
#include <iostream>
#include <string>
#include "Union.h"


class Ocean : public Union{
public:
	Ocean();
	Ocean(std::string nm, std::string loc);
	Ocean(std::string nm, std::string loc, double dp, double sz);

	friend std::ostream& operator<<(std::ostream& stream, Ocean obj);
};
