//Bismillahir Rahmanir Raheem
#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef double dl;

const int mx = 1e8;
//int numbers[mx];

#define memset(a, b) memset(a,b,sizeof(a));
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
#define endl "\n";

void solve()
{
    ll a, b;
    cin >> a >> b;
    ll x, y;
    cin >> x  >> y;
    ll ans;
    if (a == 0 && b == 0)
    {
        ans = 0;
    }
    else if(a > 0 && b < 0 )
    {
        ans = x*a + abs(b)*x;
    }
    else if(a<0 && b>0)
    {
        ans = b*x + x*abs(a);
    }
    else
    {
        if(a<b)
        {
            swap(a,b);
        }
        ans = (a - b)*x;
        a = b;
        ll ans1, ans2;
        ans1 = a*x + b*x;
        ans2 = (b*y);
        ans = ans + min(ans1,ans2); 
    }
    cout << ans << endl;
}

int main()
{
    optimize();
    int t;
        cin >> t;
        while(t--)
        {
            solve();
        }
    return 0;
}