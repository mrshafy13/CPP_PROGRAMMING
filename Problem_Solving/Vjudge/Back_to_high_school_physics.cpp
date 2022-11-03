#include <iostream>

using namespace std;

int main()
{
    int v, t, s;
    float a, temp;
    cin>>v>>t;
    if(v == 0)
    {
        a = 0;
    }
    else
    {
    a = (float)v/t;
    t = 2*t;
    t = t*t;
    temp = (0.5*a*t);
    s = temp;
    }
    cout<<s<<endl;
    return 0;
}