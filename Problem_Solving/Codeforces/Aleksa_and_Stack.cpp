#include<bits/stdc++.h>
using namespace std;

const int mx = 10e5+123;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        long long i = 1;
        for(int j = 1; j<=n ;)
        {
            if(i%3 != 0)
            {
                cout << i+2 << " ";
                j++;
            }
            else
            {
                j = j;
            }
            i++;
        }
        cout << endl;
    }
    return 0;
}