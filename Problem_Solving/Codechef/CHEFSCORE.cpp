#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    for(int i = 1; i<=t; i++)
    {
        int n, x, y, z;
        cin>>n>>x>>y;
        if(y == 0 || x==0)
        {
            cout<<"YES"<<endl;
        }
        else if(x>y)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            if(y%x==0)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }
    }
    return 0;
}