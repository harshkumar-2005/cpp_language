#include <iostream>
#include <iomanip>

int main() {
    // Example 1: Default format
    double num = 1234.56789;
    std::cout << "Default format: " << num << std::endl;

    // Example 2: Fixed-point notation
    std::cout << std::fixed;
    std::cout << "Fixed-point notation: " << num << std::endl;

    // Example 3: Scientific notation
    std::cout << std::scientific;
    std::cout << "Scientific notation: " << num << std::endl;

    // Example 4: Setting precision
    std::cout << std::setprecision(2);
    std::cout << "Precision set to 2: " << num << std::endl;

    // Example 5: Resetting to default format
    std::cout.unsetf(std::ios::fixed | std::ios::scientific);
    std::cout << std::setprecision(6); // Default precision for doubles
    std::cout << "Reset to default format: " << num << std::endl;

    return 0;
}
