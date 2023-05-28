#include <iostream>

template<typename T>
void swap(T& a, T& b)
{
    T temp = a;
    a = b;
    b = temp;
}

int main()
{
    int x = 5;
    int y = 10;
    std::cout << "Before swap: x = " << x << ", y = " << y << std::endl;

    swap(x, y);

    std::cout << "After swap: x = " << x << ", y = " << y << std::endl;

    return 0;
}
