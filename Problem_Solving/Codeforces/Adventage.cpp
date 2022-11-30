#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        long long s[n];
        long long y[n];
        for(int i = 0; i< n; i++)
        {
            cin >> s[i];
            y[i]=s[i];
        }
        sort(y, y+n);
        for(int h= 0; h < n; h++)
        {
            if(s[h]>=y[n-1])
            {
                cout << s[h] - y[n-2] << " ";
            }
            else
            {
                cout  << s[h] - y[n-1] << " ";
            }
        }
        cout << endl;
    }
    return 0;
}