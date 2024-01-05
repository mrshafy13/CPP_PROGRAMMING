//Bismillahir Rahmanir Raheem
#include<bits/stdc++.h>
using namespace std;

const long long mx = 1e9;


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
        long long n, count = 0;
        cin >> n;
        if(n < 7 or n == 9)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
            if(n % 3 == 0)
            {
                cout << 1 << " " << 4 << " " << (n-5) << endl;
            }
            else
            {
                cout << 1 << " " << 2 << " " << (n-3) << endl;
            }
        }
        
    }
    return 0;
}