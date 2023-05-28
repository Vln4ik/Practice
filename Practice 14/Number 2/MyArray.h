#ifndef MYARRAY_H
#define MYARRAY_H

#include <vector>
#include <stdexcept>

class MyArray {
private:
    std::vector<int> array;

public:
    MyArray(const std::vector<int>& elements);

    int getElement(int index);
};

#endif
