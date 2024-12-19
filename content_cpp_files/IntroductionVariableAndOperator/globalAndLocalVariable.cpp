#include<iostream>
using namespace std;  // Using this insted of std:: 


// This is a global variable
int x =30; // Same variable present in main function 
int global_variable =100;
int main()
{
    // This is a local variable
    int x =10;
    int y =90;

    cout<<x<<endl;  // Accessing local variable of same variable name
    cout<<::x<<endl; // Accessing global variable of same variable name


    cout<<global_variable<<endl;
    cout<<y;


    return 0;
}