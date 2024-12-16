#include <iostream>
using namespace std;

void withoutexplict(int x, int y)
{
    if (y == 0) {
        cout << "Division or modulo by zero is not allowed." << endl;
        return;
    }

    int sum = x + y;
    int div = x / y;  // Integer division
    int modulo = x % y;
    int multi = x * y;

    cout << "Without Explicit Casting:" << endl;
    cout << "Sum: " << sum << " Div: " << div << " Modulo: " << modulo << " Multi: " << multi << endl;
}

void explicitCast(int x, int y)
{
    if (y == 0) {
        cout << "Division or modulo by zero is not allowed." << endl;
        return;
    }

    double sum = static_cast<double>(x + y);
    double div = static_cast<double>(x) / y;  // Proper casting for division
    double multi = static_cast<double>(x * y);

    cout << "With Explicit Casting:" << endl;
    cout << "Sum: " << sum << " Div: " << div << " Modulo: Not Applicable Multi: " << multi << endl;
}

int main()
{
    int x, y;
    cout << "Enter two integers: ";
    cin >> x >> y;

    explicitCast(x, y);
    withoutexplict(x, y);

    return 0;
}
