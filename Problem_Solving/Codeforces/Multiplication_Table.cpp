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

int main()
{
    optimize();
    ll n;
    ll x;
    cin >> n >> x;
    ll count = 0;
    ll reverse;
    if(x > n)
    {
        reverse = n;
        for(ll i = n/2 - 1; i<=n; i++)
        {
            if(reverse = )
            if( i * reverse == x)
            {
                count++;
            }
            reverse--;
        }
    }
    else
    {
        reverse = x;
        for(ll i = 1; i <= x; i++)
        {
            if(reverse < i)
            {
                break;
            }
            if(i * reverse == x)
            {
                count = count + 2;
            }
        }
    }
    if(x == 1)
    {
        count = 1;
    }
    cout << count << endl;
    return 0;
}