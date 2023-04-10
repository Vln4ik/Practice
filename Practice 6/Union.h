#pragma once
#include <string>
#include <iostream>

class Union{
protected:
    std::string name, location;
    int size, deep;
public:
    Union();
    Union(std::string nm, std::string loc);
    Union(std::string nm, std::string loc, double sz, double dp);
    void Print();

    friend std::istream& operator>>(std::istream& stream, Union& obj);

    std::string getName();
};
