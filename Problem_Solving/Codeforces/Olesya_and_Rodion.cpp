//Bismillahir Rahmanir Raheem
//tutorial to the rescue......
#include<bits/stdc++.h>
using namespace std;

const int mx = 1e8;
//int numbers[mx];
__int64 pow(int a, int b)
{
    for(int i = 1; i<b; i++)
    {
        a = a*a;
    }
    return a;
}


#define memset(a, b) memset(a,b,sizeof(a));
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
#define endl "\n";

int main()
{
    optimize();
    int n, t;
    cin >> n >> t;
    __int64 number;
    if(n == 1 && t != 10)
    {
        cout << t;
    }
    else if(t >= 2 && t <=9)
    {
        for(int i = 1; i<=n; i++)
        {
            cout << t;
        }
    }
    else if(t == 10 && n!= 1)
    {
        for(int i = 1; i<n; i++)
        {
            cout << 1;
        }
        cout << 0;
    }
    else
    {
        cout << -1;
    }
    cout << endl;
    return 0;
}