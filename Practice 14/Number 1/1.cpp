#include <iostream>

class DivisionException : public std::exception {
public:
    const char* what() const noexcept override {
        return "Division by zero is not allowed.";
    }
};

class MyClass {
public:
    double divide(double a, double b) {
        if (b == 0) {
            throw DivisionException();
        }
        return a / b;
    }
};

int main() {
    try {
        MyClass obj;
        double result = obj.divide(10, 0);
        std::cout << "Result: " << result << std::endl;
    }
    catch (const DivisionException& e) {
        std::cout << "Caught DivisionException: " << e.what() << std::endl;
    }
    catch (const std::exception& e) {
        std::cout << "Caught Exception: " << e.what() << std::endl;
    }

    return 0;
}
