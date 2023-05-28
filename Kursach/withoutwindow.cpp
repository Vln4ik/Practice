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

// Функция для решения квадратного уравнения методом пополам деления
void solveQuadraticEquationByBisection(double a, double b, double c) {
    double epsilon = 1e-6; // Точность решения
    double left = -1000;   // Левая граница
    double right = 1000;   // Правая граница
    double x;

    if (a == 0) {
        // Линейное уравнение
        if (b == 0) {
            if (c == 0) {
                std::cout << "Уравнение имеет бесконечное множество решений." << std::endl;
            } else {
                std::cout << "Уравнение не имеет решений." << std::endl;
            }
        } else {
            x = -c / b;
            std::cout << "Уравнение имеет один корень:" << std::endl;
            std::cout << "Корень: " << x << std::endl;
        }
    } else {
        // Квадратное уравнение
        while (right - left > epsilon) {
            x = (left + right) / 2;
            double equationValue = a * x * x + b * x + c;

            if (equationValue > 0) {
                right = x;
            } else if (equationValue < 0) {
                left = x;
            } else {
                break;
            }
        }

        std::cout << "Уравнение имеет один корень:" << std::endl;
        std::cout << "Корень: " << x << std::endl;
    }
}

// Функция для решения квадратного уравнения методом формулы Виета
void solveQuadraticEquationByVieta(double a, double b, double c) {
    double root1, root2;

    if (a == 0) {
        // Линейное уравнение
        if (b == 0) {
            if (c == 0) {
                std::cout << "Уравнение имеет бесконечное множество решений." << std::endl;
            } else {
                std::cout << "Уравнение не имеет решений." << std::endl;
            }
        } else {
            root1 = -c / b;
            std::cout << "Уравнение имеет один корень:" << std::endl;
            std::cout << "Корень: " << root1 << std::endl;
        }
    } else {
        // Квадратное уравнение
        double sumOfRoots = -b / a;
        double productOfRoots = c / a;

        if (sumOfRoots * sumOfRoots - 4 * productOfRoots >= 0) {
            root1 = (-sumOfRoots + sqrt(sumOfRoots * sumOfRoots - 4 * productOfRoots)) / 2;
            root2 = (-sumOfRoots - sqrt(sumOfRoots * sumOfRoots - 4 * productOfRoots)) / 2;

            std::cout << "Уравнение имеет два различных корня:" << std::endl;
            std::cout << "Корень 1: " << root1 << std::endl;
            std::cout << "Корень 2: " << root2 << std::endl;
        } else {
            std::cout << "Уравнение не имеет действительных корней." << std::endl;
        }
    }
}

int main() {
    double a, b, c;

    // Ввод коэффициентов от пользователя
    std::cout << "Введите коэффициент a: ";
    std::cin >> a;
    std::cout << "Введите коэффициент b: ";
    std::cin >> b;
    std::cout << "Введите коэффициент c: ";
    std::cin >> c;

    // Решение квадратного уравнения методом дискриминанта
    std::cout << "Метод дискриминанта:" << std::endl;
    solveQuadraticEquationByDiscriminant(a, b, c);

    // Решение квадратного уравнения методом пополам деления
    std::cout << "Метод пополам деления:" << std::endl;
    solveQuadraticEquationByBisection(a, b, c);

    // Решение квадратного уравнения методом формулы Виета
    std::cout << "Метод формулы Виета:" << std::endl;
    solveQuadraticEquationByVieta(a, b, c);

    return 0;
}
