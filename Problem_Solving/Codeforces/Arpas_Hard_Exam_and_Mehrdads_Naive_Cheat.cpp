//Bismillahir Rahmanir Raheem
#include<bits/stdc++.h>
using namespace std;

//const long long mx = 1e9+10;
//int numbers[mx];


#define memset(a, b) memset(a,b,sizeof(a));
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
#define endl "\n";

void solve(long long ans)
{
    if(ans == 1)
    {
        cout << 8 << endl;
    }
    else if(ans == 2)
    {
        cout << 4 << endl;
    }
    else if(ans == 3)
    {
        cout << 2 <<  endl;
    }
    else if(ans == 0)
    {
        cout << 6 << endl; 
    }
}

int main()
{
    optimize();
    
    long long n;
    cin >> n;
    if(n == 0)
    {
        cout << 1 << endl;
    }
    else
    {
        long long ans;
        ans = n/4;
        ans = n - ans*4;
        solve(ans);
    }
    return 0;
}