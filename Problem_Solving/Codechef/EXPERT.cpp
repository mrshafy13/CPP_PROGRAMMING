#include<iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 1; i<= t; i++)
    {
    long long int x, n, y;
    cin >>x>>n;
    y = x/2;
    if(x%2!=0)
    {
        y++;
    }
    if(y>n)
    {
        cout<<"NO"<<endl;
    }
    else
        {
            cout<<"YES"<<endl;
        }
    }

    return 0;
}
