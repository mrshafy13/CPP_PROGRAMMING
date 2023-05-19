#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        if(n%2!=0)
        {
            for(int i = 1; i<=n; i++)
            {
                cout << i << " ";
            }
        }
        else
        {
            for(int i = 1; i<=n; i++)
            {
                cout << i*2 << " ";
            }
        }
        cout << endl;
    }
    return 0;
}