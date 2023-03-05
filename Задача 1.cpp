#include <iostream>
#include <locale>
#include <iomanip>
#include "eq2.h"

int main()
{
    setlocale(LC_ALL, "");
    
    double a, b, c;
    std::cout << "Введите коэффициенты квадратного уравнения: ";
    std::cin >> a >> b >> c;
    eq2 exmpl(a, b, c);
    exmpl.find_X();
    std::cout << "При x = 6, значение многочлена равно " << exmpl.find_Y(6) << std::endl;

    eq2 exmpl2(1, 2, 1);
    eq2 exmpl_sum = exmpl + exmpl2;

    std::cout << "Коэффициенты exmpl a = " << std::fixed << std::setprecision(2) << exmpl.get_a() << ", b = " << exmpl.get_b() << ", c = " << exmpl.get_c() << std::endl;
    std::cout << "Коэффициенты exmpl2 a = " << exmpl2.get_a() << ", b = " << exmpl2.get_b() << ", c = " << exmpl2.get_c() << std::endl;
    std::cout << "Коэффициенты exmpl_sum a = " << exmpl_sum.get_a() << ", b = " << exmpl_sum.get_b() << ", c = " << exmpl_sum.get_c() << std::endl;


    return 0;
}