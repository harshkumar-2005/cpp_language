#include <iostream>
//using namespace std;
int main() {
    int n;
    std::cout << "Enter a positive integer: ";
    std::cin >> n;

    if (n <= 0) {
        std::cout << "Please enter a positive integer." << std::endl;
        return 1;
    }

    int sum = (n * (n + 1)) / 2;
    std::cout << "The sum of all natural numbers up to " << n << " is " << sum << "." << std::endl;

    return 0;
}