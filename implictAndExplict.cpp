#include <iostream>
using namespace std;

void withoutexplict(int x, int y)
{
    int sum;
    //doing sum
    sum =x+y;

    int div;
    //doing division
    div =x/y;

    int modulo;
    modulo =x%y;

    int multi;
    multi =x*y;

    cout<<sum<<" "<<div<<" "<<modulo<<" "<<multi;
}

void Explict(int x, int y)
{
    double sum;
    //doing sum
    sum =static_cast<double>(x+y);

    double div;
    //doing division
    div =static_cast<double>(x/y);

    double modulo;
    modulo =static_cast<double>(x%y);

    double multi;
    multi =1.0*static_cast<double> (x*y);

    cout<<sum<<" "<<div<<" "<<modulo<<" "<<multi;
}

int main()
{
    int x;
    int y;
    cin>>x>>y;
    Explict(x,y);
    cout<<endl;
    withoutexplict(x,y);

    return 0;
}


