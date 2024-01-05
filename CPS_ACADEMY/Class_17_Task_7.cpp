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
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int a = n/2;
        int b = n - a;
        cout << a << " " << b << endl;
    }
    return 0;
}