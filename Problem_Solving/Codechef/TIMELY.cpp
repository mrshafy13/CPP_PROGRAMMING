#include<iostream>
using namespace std;

int main()
{
    int t, x;
    cin >> t;
    for(int i = 1; i<=t; i++)
    {
        cin >> x;
        if(x>=30)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
