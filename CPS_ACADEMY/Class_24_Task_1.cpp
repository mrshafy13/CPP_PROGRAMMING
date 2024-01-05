#include<bits/stdc++.h>
using namespace std;

const int mx = 1e8;


#define memset(a, b) memset(a,b,sizeof(a));
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
#define endl "\n";

int main()
{
    optimize();
    int l, r;
    cin >> l >> r;
    l = l - 1; 
    r = r;
    string s;
    cin>> s;
    reverse(s.begin() + l, s.begin() + r);
    cout << s << endl;
    return 0;
}