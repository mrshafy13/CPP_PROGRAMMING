#include<bits/stdc++.h>
using namespace std;

const int mx = 125;


#define memset(a, b) memset(a,b,sizeof(a));
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
#define endl "\n";

void solve()
{
    int t;
    cin >> t;
    for(int i = 1; i<=t; i++)
    {
        int x, y;
        cin >> x >> y;
        cout << "Case "<<i<<": "<<x+y << endl;
    }
}

int main()
{
    optimize();
    solve();
    return 0;
}