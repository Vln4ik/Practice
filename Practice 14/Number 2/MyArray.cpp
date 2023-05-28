#include "MyArray.h"

MyArray::MyArray(const std::vector<int>& elements) : array(elements) {}

int MyArray::getElement(int index) {
    if (index < 0 || index >= array.size()) {
        throw std::out_of_range("Invalid index");
    }
    return array[index];
}
