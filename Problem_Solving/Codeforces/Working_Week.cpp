#include<iostream>
using namespace std;
int	main()
{
    long int t, n;
    cin>>t;
    for(int i = 1; i<= t; i++)
    {
        cin>>n;
        int x;
        x = ((n-3)/3)-1;
        cout<<x<<endl;
    }
    return 0;
}
