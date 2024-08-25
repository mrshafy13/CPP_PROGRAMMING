//Bismillahir Rahmanir Raheem
#include<bits/stdc++.h>
using namespace std;

const int mx = 2e5 + 5;

typedef long long ll;
typedef double dl;
ll numbers[mx];
ll sum[mx];
#define memset(a, b) memset(a,b,sizeof(a));
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
#define endl "\n";

int main()
{
    optimize();
    int n, q;
    cin >> n >> q;
    for(int i = 1; i<=n; i++)
    {
        cin >> numbers[i];
    }
    sum[0] = 0;
    for(int i = 1; i<=n; i++)
    {
        sum[i] = sum[i-1] ^ numbers[i];
    }
    while(q--)
    {
        ll s, r;
        cin >> s >> r;
        cout << (sum[r] ^ sum[s-1]) << endl;
    }

    return 0;
}