#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i = 1; i<=t; i++)
    {
        int n,x = 0, y = 1;
        cin>>n;
        int arr[n];
        for(int j = 0; j<n; j++)
        {
            cin>>arr[j];
        }
        
        cout<<abs(x-y)-1<<endl;
    }
    return 0;
}
