#include <iostream>

using namespace std;

int second_max(int num1, int num2, int num3)
{
    if(num1>num2 && num1>num3)
    {
        if(num2>num3)
        return num2;
        else
        return num3;
    }
    else if(num2>num1 && num2>num3)
    {
        if(num1>num3)
        return num1;
        else
        return num3;
    }
    else if(num1>num2)
    {
        return num1;
    }
    else 
    {
        return num2;
    }
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        {
            int a, b, c;
            cin >> a >> b >> c;
            cout << second_max(a,b,c) << endl;
        }
    }
    return 0;
}