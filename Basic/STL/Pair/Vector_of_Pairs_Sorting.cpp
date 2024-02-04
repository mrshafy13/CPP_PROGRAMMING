//Bismillahir Rahmanir Raheem
#include<bits/stdc++.h>
using namespace std;

const int mx = 1e8;
int numbers[mx];


#define memset(a, b) memset(a,b,sizeof(a));
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
#define endl "\n";

int main()
{
    optimize();
    vector <pair <int,int>> v;
    v.push_back({6,5});
    v.push_back({2,3});
    v.push_back({4,5});
    v.push_back({6,1});
    v.push_back({1,9});
    //v.push_back({6,5});
    sort(v.begin(), v.end());
    for(auto u : v)
    {
        cout << u.first << " " << u.second << endl;
    }
    sort(v.rbegin(), v.rend());
    for(auto u : v)
    {
        cout << u.first << " " << u.second << endl;
    }
    return 0;
}