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
