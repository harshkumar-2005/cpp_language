#include<iostream>
using namespace std;

void printTruthTable();

int main()
{
    int a = 5;  // Binary: 0101
    int b = 3;  // Binary: 0011

    // Logical AND
    cout << "(a > 0) && (b > 0) = " << ((a > 0) && (b > 0)) << endl;  // Both true -> Result: 1
    cout << "(a < 0) && (b > 0) = " << ((a < 0) && (b > 0)) << endl;  // one false one true -> Result: 0
    cout << "(a > 0) && (b < 0) = " << ((a > 0) && (b < 0)) << endl;  //  one true one false -> Result: 0

    // Logical OR
    cout<<endl<<endl;
    cout << "(a > 0) || (b > 0) = " << ((a > 0) || (b > 0)) << endl;  // Both true -> Result: 1
    cout << "(a > 0) || (b < 0) = " << ((a > 0) || (b < 0)) << endl;  // One true -> Result: 1
    cout << "(a < 0) || (b < 0) = " << ((a < 0) || (b < 0)) << endl;  // One true -> Result: 1

    // Logical NOT
    cout<<endl<<endl;
    cout << "!(a > 0) = " << (!(a > 0)) << endl;  // Negates true -> Result: 0
    cout << "!(a < 0) = " << (!(a < 0)) << endl;  // Negates flase -> Result: 1
    cout << "!(b > 0) = " << (!(b > 0)) << endl;  // Negates true -> Result: 0
    cout << "!(b < 0) = " << (!(b < 0)) << endl;  // Negates false -> Result: 1


        cout<<endl<<endl;
        
        printTruthTable();
    return 0;
}




void printTruthTable() {
    cout << "\nTruth Table for Logical AND (&&):\n";
    cout << "A\tB\tA && B\n";
    cout << "0\t0\t" << (0 && 0) << "\n";
    cout << "0\t1\t" << (0 && 1) << "\n";
    cout << "1\t0\t" << (1 && 0) << "\n";
    cout << "1\t1\t" << (1 && 1) << "\n";

    cout << "\nTruth Table for Logical OR (||):\n";
    cout << "A\tB\tA || B\n";
    cout << "0\t0\t" << (0 || 0) << "\n";
    cout << "0\t1\t" << (0 || 1) << "\n";
    cout << "1\t0\t" << (1 || 0) << "\n";
    cout << "1\t1\t" << (1 || 1) << "\n";

    cout << "\nTruth Table for Logical NOT (!):\n";
    cout << "A\t!A\n";
    cout << "0\t" << (!0) << "\n";
    cout << "1\t" << (!1) << "\n";
}
