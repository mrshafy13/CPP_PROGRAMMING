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
        int ans = 0;
        int options = 4;
        while(options--)
        {
            int x;
            cin >> x;
            if(x>ans)
            {
                ans = x;
            }
        }
        cout << ans << endl;
    }
    return 0;
}