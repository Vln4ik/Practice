#include <iostream>
#include "MySet.h"

int main() {
    try {
        MySet set;

        // Пример обращения к пустому множеству
        int element = 10;
        bool containsElement = set.containsElement(element);
        std::cout << "Contains element " << element << ": " << std::boolalpha << containsElement << std::endl;
    }
    catch (const EmptySetException& e) {
        std::cout << "Caught EmptySetException: " << e.what() << std::endl;
    }
    catch (const std::exception& e) {
        std::cout << "Caught std::exception: " << e.what() << std::endl;
    }

    return 0;
}
