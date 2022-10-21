#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int t;
    cin>>t;
    for(int i = 1; i<= t; i++)
    {
        int a, b, c, l=1, x, y;
        cin>>a>>b>>c;
        if(b==l)
        {
            x = abs(a-b);
            y = abs(c-b);
            if(x>y)
            {
                cout<<y<<endl;
            }
            else
            {
                cout<<x<<endl;
            }
        }
        else if(a==l)
        {
            cout<<a<<endl;
        }
        else
        {
            
        }
    }

    return 0;
}
