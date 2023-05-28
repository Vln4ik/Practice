#ifndef MYSET_H
#define MYSET_H

#include <set>
#include <stdexcept>

class EmptySetException : public std::exception {
public:
    const char* what() const noexcept override {
        return "Empty set";
    }
};

class MySet {
private:
    std::set<int> set;

public:
    void addElement(int element);
    bool containsElement(int element);
    int getElementCount();
};

#endif
