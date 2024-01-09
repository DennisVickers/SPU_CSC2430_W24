#include <iostream>
#include "MathOperations.h"

int main() {
    int x = 5, y = 3;

    std::cout << "Addition of " << x << " and " << y << ": " << MathOperations::add(x, y) << std::endl;
    std::cout << "Subtraction of " << x << " from " << y << ": " << MathOperations::subtract(x, y) << std::endl;

    return 0;
}
