#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i = 1; i<=t; i++)
    {
        int a, b, c;
        cin>>a>>b>>c;
        int diff;
        diff = c-a;
        cout<<diff<<endl;
    }
    return 0;
}