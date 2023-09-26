#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long n, k, x, sum = 0, operations=0;
        cin >> n >> k >> x;
        for(int i = n; i>=1 ; i--)
        {
            if(x%n == 0)
            {
                continue;
            }
            else if((x-i) < 0)
            {
                x = x-i;
                operations++;
            }
        }
        if(operations == k && x == 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}