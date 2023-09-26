#include<bits/stdc++.h>
using namespace std;

const int mx = 1000+123;
int numbers[mx];
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, k;
        cin >> n >> k;
        int vis = 0;
        for(int i = 1; i <= n; i++)
        {
            cin >> numbers[i];
        }
        for(int i = 1; i<= n; i++)
        {
            if(numbers[i]==k)
            {
                vis = 1;
                break;
            }
        }
        if(vis == 1)
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