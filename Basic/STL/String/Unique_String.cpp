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
    string s = "deacbAAA";
    sort(s.begin(), s.end());
    int Sz;
    Sz = unique(s.begin(), s.end()) - s.begin();
    cout << Sz << endl;
    for(int i = 0; i<Sz; i++)
    {
        cout << s[i];
    }
    cout << endl;
    return 0;
}