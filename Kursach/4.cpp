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
