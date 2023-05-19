#include <bits/stdc++.h>

using namespace std;
const int mx = 1e8 + 123;
bool checker[mx];


int main()
{
    int n;
    cin >> n;
    int ans = 0;
    for(int i = 1; i<=n; i++)
    {
        checker[i*i] = 1;
    }
    for(int a = 1; a<=n; a++)
    {
        for(int b = a; b <=n; b++)
        {
            int d = (a*a) + (b*b);
            if(d>=mx)
            {
                break;
            }
            if(checker[d])
            {
                ans++;
            }
        }
    }
    cout << ans << endl;
    return 0;
}