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
    set <int, greater<int>> s;
    s.insert(3);
    s.insert(2);
    s. insert(5);
    s.insert(10);
    s.insert(6);

    for(auto u : s)
    {
        cout << u << endl;
    }
    set < string, greater<string>> l;
    l.insert("miha");
    l.insert("rafy");
    l.insert("nahid");
    l.insert("shafy");
    l.insert("nadia");
    for(auto u : l)
    {
        cout << u << endl;
    }
    return 0;
}