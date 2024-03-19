#include <iostream>
#include <iomanip>

int main() {
    float value = 3.14159265;
    int n = 6; // Number of digits after the decimal point

    std::cout << std::fixed << std::setprecision(n) << value << std::endl;

    return 0;
}
