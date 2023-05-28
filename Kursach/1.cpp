#include <iostream>
#include <cmath>

// Функция для решения квадратного уравнения методом дискриминанта
void solveQuadraticEquationByDiscriminant(double a, double b, double c) {
    double discriminant = b * b - 4 * a * c;
    if (discriminant > 0) {
        double root1 = (-b + sqrt(discriminant)) / (2 * a);
        double root2 = (-b - sqrt(discriminant)) / (2 * a);
        std::cout << "Уравнение имеет два различных корня:" << std::endl;
        std::cout << "Корень 1: " << root1 << std::endl;
        std::cout << "Корень 2: " << root2 << std::endl;
    } else if (discriminant == 0) {
        double root = -b / (2 * a);
        std::cout << "Уравнение имеет один корень:" << std::endl;
        std::cout << "Корень: " << root << std::endl;
    } else {
        std::cout << "Уравнение не имеет действительных корней." << std::endl;
    }
}
