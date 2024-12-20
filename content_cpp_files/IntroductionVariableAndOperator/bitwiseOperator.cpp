#include<iostream>
using namespace std;


/*
    Bitwise operators are:-
    &, Bitwise AND
    |, Bitwise OR
    ^, Bitwise XOR
    <<, Bitwise Left shift
    >>, Bitwise  Rigth shift
    ~,  Bitwise Bitwise not

    A bitwise operator is a character that manipulates individual bits in a binary pattern. Bitwise operators 
    are used in computer science to compare and manipulate integers and binary data. They are different from 
    other operators, like +, -, and *, which work with bytes or groups of bytes. 
    Here are some examples of bitwise operators: 

    AND (&): Returns 1 if both bits are 1
    OR (|): Returns 1 if one of the bits is 1
    XOR (^): Returns 1 if the bits are different
    NOT (~): The bitwise complement of N

    example :-
        10101100 & 11011110
        -> 10001100  (answer)

    */




int main()
{   
    int a = 5;  // Binary: 0101
    int b = 3;  // Binary: 0011

    // Bitwise AND
    cout << "a & b = " << (a & b) << endl;  // Binary: 0001 -> Decimal: 1

    // Bitwise OR
    cout << "a | b = " << (a | b) << endl;  // Binary: 0111 -> Decimal: 7

    // Bitwise XOR
    cout << "a ^ b = " << (a ^ b) << endl;  // Binary: 0110 -> Decimal: 6

    // Bitwise NOT
    cout << "~a = " << (~a) << endl;        // Binary: 1010 (Two's Complement Representation)

    // Left Shift
    cout << "a << 1 = " << (a << 1) << endl; // Binary: 1010 -> Decimal: 10

    // Right Shift
    cout << "a >> 1 = " << (a >> 1) << endl; // Binary: 0010 -> Decimal: 2

    return 0;
}
