#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for (int i = 0; i < t; i++)
    {
        long long int n;
        cin>>n;
        char a[n], b[n];
        cin>>a;
        cin>>b;
        int x=0, y=0;
        for(int j = 0; j<n; j++)
        {
            for(int k = 0; k<n; k++)
            {
                if(a[j]==b[j])
                {
                    x++;
                }
                if(a[j]!=b[j])
                {
                    y++;
                }
            }
        }
    }
    
    return 0;
}