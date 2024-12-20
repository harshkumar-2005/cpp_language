#include <iostream>
using namespace std;

int main() {
    int num;

    // Input a number from the user
    cout << "Enter a number: ";
    cin >> num;

    // Get the last digit
    int lastDigit = num % 10;

    // Output the last digit
    cout << "The last digit of " << num << " is " << lastDigit << endl;

    return 0;
}
