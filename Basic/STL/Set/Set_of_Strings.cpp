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
    set <string> s;
    s.insert("shafy");
    s.insert("rafy");
    s.insert("miha");
    s.insert("nahid");
    s.insert("nadia");
    s.insert("shafy");
    s.insert("rafy");
    s.insert("miha");
    s.insert("nahid");
    s.insert("nadia");

    cout << s.size() << endl;   
    for(auto u : s)
    {
        cout << u << " ";
    }
    cout << endl;
    return 0;
}