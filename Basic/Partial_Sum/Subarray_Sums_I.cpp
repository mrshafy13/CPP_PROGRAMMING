/* Bismillahir Rahmanir Raheem */
#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef double dl;

const ll mx = 2e5 + 10;
ll numbers[mx];
ll sum[mx];

#define memset(a, b) memset(a,b,sizeof(a));
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
#define endl "\n";

int main()
{
    optimize();
    ll n, a;
    cin >> n >> a;
    for(ll i = 1; i<=n; i++)
    {
        cin >> numbers[i];
    }
    for(ll i = 1; i<=n; i++)
    {
        sum[i] = numbers[i] + sum[i-1];
    }
    map <ll, int> cnt;
    cnt[0] = 1;
    ll ans = 0;
    for(ll i = 1; i<=n; i++)
    {
        ll l = sum[i] - a;
        ans += cnt[l];
        cnt[sum[i]]++;
    }
    cout << ans << endl;
    return 0;
}