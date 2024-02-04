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
    set<pair<int, int>, greater<pair<int, int>>> s;
    s.insert({2,3});
    s.insert({4,1});
    s.insert({2,3});
    s.insert({6,1});
    s.insert({2,3});
    s.insert({4,9});
    s.insert({2,3});
    s.insert({3,8});
    cout << s.size() << endl;
    for(auto u : s)
    {
        cout << u.first << " " << u.second << endl;
    }
    return 0;
}