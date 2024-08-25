//Bismillahir Rahmanir Raheem
#include<bits/stdc++.h>
using namespace std;

const int mx = 1e5+5;
typedef long long ll;
typedef double dl;
ll numbers[mx];
ll preSum[mx];
#define memset(a, b) memset(a,b,sizeof(a));
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
#define endl "\n";

int main()
{
    optimize();
    ll n;
    cin >> n;
    for(int i = 1; i<=n; i++)
    {
        cin >> numbers[i];
    }
    for(int i = 1; i<=n; i++)
    {
        preSum[i] = preSum[i-1]+numbers[i];
    }
    int q;
    cin >> q;
    while(q--)
    {
        ll p, q;
        cin >> p >> q;
        cout << (preSum[q+1] - preSum[p]) << endl;
    }
    return 0;
}