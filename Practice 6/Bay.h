#pragma once
#include <iostream>
#include <string>
#include "Union.h"
#include "Ocean.h"
#include "Sea.h"

class Bay : public Union {
protected:
	Ocean* oceanParent;
	Sea* seaParent;
public:
	Bay();
	Bay(std::string nm, std::string loc);
	Bay(std::string nm, std::string loc, Sea* _seaParent);
	Bay(std::string nm, std::string loc, Ocean* _oceanParent);
	Bay(std::string nm, std::string loc, double sz, double dp);
	Bay(std::string nm, std::string loc, double sz, double dp, Ocean* parent);
	Bay(std::string nm, std::string loc, double sz, double dp, Sea* parent);

	friend std::ostream& operator<<(std::ostream& stream, Bay& odj);

	void setParent(Ocean _parent);
	void setParent(Sea _parent);
};
