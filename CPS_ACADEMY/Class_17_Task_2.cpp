#include<bits/stdc++.h>
using namespace std;

const int mx = 1e5;


#define memset(a, b) memset(a,b,sizeof(a));
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
#define endl "\n";

void solve()
{
    for(int i = 1; i<=mx; i++)
    {
        int x;
        cin >> x;
        if(x==0)
        {
            break;
        }
        else
        {
            cout << "Case "<< i << ": " << x << endl;
        }
    }
}

int main()
{
    optimize();
    solve();
    return 0;
}