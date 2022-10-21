#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i = 1; i<=t; i++)
    {
        int a, b, c;
        cin>>a>>b>>c;
        if((a%2==0 && b%2==0 && c%2==0)||(a%2!=0 && b%2!=0 && c%2!=0))
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