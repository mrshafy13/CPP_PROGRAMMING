#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, count = 0;
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        int p, q;
        cin >> p >> q;
        int k = q - p;
        if(k>=2)
        {
            count++;
        }
    }
    cout << count << endl;
    return 0;
}