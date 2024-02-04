//Bismillahir Rahmanir Raheem
#include<bits/stdc++.h>
using namespace std;

const int mx = 1e8;
//int numbers[mx];


#define memset(a, b) memset(a,b,sizeof(a));
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
#define endl "\n";

int main()
{
    optimize();
    int n;
    cin >> n;
    vector < pair <string, string>> v(n);
    
    for(int i = 0; i<n; i++)
    {
        cin >> v[i].first >> v[i].second;
    }
    sort(v.begin(), v.end());
    int sz = unique(v.begin(),v.end()) -v.begin() ;
    cout << sz << endl;
    return 0;
}