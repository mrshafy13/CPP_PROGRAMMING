//Bismillahir Rahmanir Raheem
#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef double dl;

const int mx = 1e8;
ll numbers[mx];

#define memset(a, b) memset(a,b,sizeof(a));
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
#define endl "\n";
#define  mod  1000000007;
ll fib(ll n)
{
    
    if(numbers[n] != 0)
    {
        return numbers[n];
    }
    if(n == 0 || n == 1)
    {
        return numbers[n] = n;
    }
    ll res = fib(n-1) + fib(n-2);
    return numbers[n] = res % mod;

}

int main()
{
    optimize();
    ll n;
    cin >> n;
    cout << fib(n) << endl;
    return 0;
}

