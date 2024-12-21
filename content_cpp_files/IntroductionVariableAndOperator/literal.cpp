#include<iostream>
int main(){
    
    // Types of Literals in C++
    // Integer Literals
    // Represent whole numbers without fractional parts.

    // Decimal: Base 10 (e.g., 10, 1000, -45)
    // Octal: Base 8 (prefix 0, e.g., 012, 0763)
    // Hexadecimal: Base 16 (prefix 0x or 0X, e.g., 0x1A, 0XFF)
    // Binary: Base 2 (prefix 0b or 0B, e.g., 0b1101, 0B1010)
    int decimal = 42;
    int octal = 052;       // Equals 42 in decimal
    int hex = 0x2A;        // Equals 42 in decimal
    int binary = 0b101010; // Equals 42 in decimal


    // Floating-Point Literals
    // Represent real numbers with a fractional part or in exponential form.

    // Decimal Notation: 3.14, 0.001
    // Exponential Notation: 1.23e4 (equivalent to 1.23×1041.23×104)
    // Suffixes: f or F for float, l or L for long double
    double pi = 3.14159;
    float g = 9.8f;        // Explicit float
    long double ld = 6.022e23L; // Explicit long double


    // Represent single characters enclosed in single quotes (').
    // Can be alphanumeric, special characters, or escape sequences (e.g., '\n', '\t').
    // Unicode characters: L'A', u'α', U'β'
    char ch = 'A';
    char newline = '\n'; // Newline character
    wchar_t wideChar = L'Ω'; // Wide character literal

    // String Literals
    // Represent sequences of characters enclosed in double quotes (").
    // Stored as a null-terminated array of characters.
    // Prefixes:
    // u8"..." for UTF-8
    // L"..." for wide string
    // u"..." for UTF-16
    // U"..." for UTF-32
    const char* str = "Hello, World!";
    const wchar_t* wideStr = L"Wide String";
    const char* utf8Str = u8"UTF-8 String";

    // Boolean Literals
    // Represent true and false. Examples:
    bool isAvailable = true;
    bool isComplete = false;

    // Null Pointer Literal
    // Represent a null pointer.
    // Modern C++: Use nullptr (type-safe).
    // Old Style: Use NULL.
    int* ptr = nullptr;

    // Type suffixes for integer literals:
    // u or U: Unsigned
    // l or L: Long
    // ll or LL: Long long
    unsigned int x = 42u;
    long y = 123L;
    long long z = 456LL;

    










        


    return 0;;
}








