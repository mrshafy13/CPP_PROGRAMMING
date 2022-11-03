#include <iostream>

using namespace std;

int main()
{
    int a, b, c, d, x1, y1, x2, y2;
    cin>>a>>b>>c>>d;
    x1 = (3*a)/10;
    y1 = a - ((a/250)*c);
    x2 = (3*b)/10;
    y2 = b - ((b/250)*d);

    if(y1<=x1)
    {
        y1 = x1;
    }
    if(y2<=x2)
    {
        y2 = x2;
    }
    if(y1>y2)
    {
        cout<<"Misha"<<endl;
    }
    else if(y2>y1)
    {
        cout<<"Vasya"<<endl;
    }
    else
    {
        cout<<"Tie"<<endl;
    }
    return 0;
}