#include <iostream>
#include <cmath>

int main() {
    double radius;

    std::cout << "Введіть радіус круга (cм): ";
    std::cin >> radius;

    double area = M_PI * pow(radius, 2);

    std::cout << "Площа круга з радіусом " << radius << " дорівнює " << area << std::endl;
    return 0;
}
