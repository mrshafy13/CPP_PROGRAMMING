//Bismillahir Rahmanir Raheem
#include<bits/stdc++.h>
using namespace std;

const int mx = 1e8;
//int numbers[mx];


#define memset(a, b) memset(a,b,sizeof(a));
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
#define endl "\n";

bool cmp(const pair <int, int> &p1, const pair <int, int> &p2)
{
    if(p1.first > p2.first) 
    {
        return 1;
    }
    else if (p1.first == p2.first)
    {
        return (p1.second < p2.second);
    }
    
    return 0;
}

int main()
{
    optimize();
    int n, k;
    cin >> n >> k;
    vector <pair <int, int>> v(n);

    for(int i = 0; i<n; i++)
    {
        cin >> v[i].first >> v[i].second;
    }

    sort(v.begin(), v.end(), cmp);

    int ans = 0;
    for(auto u : v)
    {
        if(u == v[k-1])
        {
            ans++;
        }
    }

    cout << ans << endl;

    return 0;
}