//Bismillahir Rahmanir Raheem
#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef double dl;

const int mx = 1e5+123;
int numbers[mx];
ll sum[mx];

#define memset(a, b) memset(a,b,sizeof(a));
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
#define endl "\n";

int main()
{
    optimize();
    int t;
    cin >> t;
    
    for(int tc = 1; tc<=t; tc++)
    {
        int n, m;
        cin >> n >> m;
        for(int i = 1; i<=n; i++)
        {
            cin >> numbers[i];
        }
        for(int i = 1; i<=n;i++)
        {
            sum[i] = sum[i-1] + numbers[i];
        }
        for(int i = 1; i<=n;i++)
        { 
            sum[i] %= m;
        }
        ll ans = 0;
        map<int, int> cnt; 
        cnt[0]++;
        for(int i = 1; i<=n; i++)
        {
            ans += cnt[sum[i]];
            cnt[sum[i]]++;
        }
        cout << "Case " << tc << ": " << ans << endl;
    }
    return 0;
}