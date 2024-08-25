//Bismillahir Rahmanir Raheem
#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef double dl;

const int mx = 1e5+10;
//int numbers[mx];

#define memset(a, b) memset(a,b,sizeof(a));
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
#define endl "\n";
#define  mod  1000000007
ll DP[mx];
ll fact(ll n)
{
    if(n == 0)
    {
        return 1;
    }
    if(DP[n]!=0)
    {
        return DP[n];
    }
    ll res = (((n % mod) * (fact(n-1) % mod)) % mod);
    return DP[n] = res;
}
int main()
{
    optimize();
    ll n;
    cin >> n;
    cout << fact(n) << endl;
    return 0;
}