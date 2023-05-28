#include <iostream>
#include <vector>
#include "MyArray.h"

int main() {
    try {
        std::vector<int> elements = {1, 2, 3, 4, 5};
        MyArray arr(elements);

        // Пример обращения к элементу массива с неправильным индексом
        int index = 10;
        int value = arr.getElement(index);
        std::cout << "Value at index " << index << ": " << value << std::endl;
    }
    catch (const std::out_of_range& e) {
        std::cout << "Caught std::out_of_range: " << e.what() << std::endl;
    }
    catch (const std::exception& e) {
        std::cout << "Caught std::exception: " << e.what() << std::endl;
    }

    return 0;
}
