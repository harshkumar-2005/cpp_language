#include<iostream>
#include <iomanip>
using namespace std;

int main()
{

    cout << "\nTruth Table for Comparison Operators:\n";
    cout << left << setw(5) << "A" << setw(5) << "B";
    cout << setw(8) << "A == B" << setw(8) << "A != B" << setw(8) << "A < B";
    cout << setw(8) << "A <= B" << setw(8) << "A > B" << "A >= B\n";

    int values[] = {0, 1};
    for (int a : values) {
        for (int b : values) {
            cout << setw(5) << a << setw(5) << b;
            cout << setw(8) << (a == b) << setw(8) << (a != b);
            cout << setw(8) << (a < b) << setw(8) << (a <= b);
            cout << setw(8) << (a > b) << (a >= b) << "\n";
        }
    }
    return 0;
}