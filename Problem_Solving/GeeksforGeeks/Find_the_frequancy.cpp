//Bismillahir Rahmanir Raheem
#include<bits/stdc++.h>
using namespace std;

const int mx = 1e8;
//int numbers[mx];


#define memset(a, b) memset(a,b,sizeof(a));
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
#define endl "\n";

int findFrequency(vector<int> v, int x){
    map<int, int> cnt;
    for(auto u : v)
    {
        cnt[u]++;
    }
    cnt[x];
    return cnt[x];
}

int main()
{
    optimize();
    int n;
    cin >> n;
    vector< int > v(n);
    for(int i = 0; i<n; i++)
    {
        cin >> v[i];
    }
    int x;
    cin >> x;
    
    cout << findFrequency(v, x) << endl;

    return 0;
}
