#include<bits/stdc++.h>
using namespace std;

const int mx = 100+20;
long long int numbers[mx];
bool checker[mx];
long long min(long long a, long long b)
{
    if(a>b)
    {
        return b;
    }
    else
    {
        return a;
    }
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int a, b, n;
        cin >> a >> b >> n;
        
        long long sum = b;
        
        for(int i = 1; i<=n; i++)
        {
            long long x;
            cin >> x;
            sum = sum + min(a-1,x);
        }
        
        
        cout << sum<< endl;
    }
    return 0;
}