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
