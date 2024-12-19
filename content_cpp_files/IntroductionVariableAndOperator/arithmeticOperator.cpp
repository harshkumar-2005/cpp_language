#include<iostream>
using namespace std;

int main()
{
    /* arithmetic operator are 
            +,-,*,/,%
            % is for remainder
            / is for normal division
    */

   // Addition 

        int x;
        int y;
        cin>> x;  // Taking value of x from user
        cin>> y;  // Taking value of y from user
        int sum;
        sum =x+y;
        cout<<sum<<" "<<x+y<<endl;


    //subtraction

        int p;
        int q;
        cin>>p>>q;  // Can take in go other way is to write cin>>y; again
        int diff;
        diff =abs(p-q);  // abs is used for positive result even if x is smaller compare to y

        cout<<diff<<" "<<p-q<<endl;


    // multipication 

        int o;
        int l;
        cin>>o>>l;
        int mult;
        mult =o*l;

        cout<<mult<<" "<<o*l<<endl;


    // Normal division

        int g;
        int h;
        cin>>g>>h;
        int nor_div;
        nor_div =g/h;
        cout<<nor_div<<" "<<g/h<<endl;

    // Modulos/Remainder division 

        int d;
        int e;
        cin>>d>>e;
        int div;
        div =d%e;
        cout<<div<<" "<<d%e;





   
}