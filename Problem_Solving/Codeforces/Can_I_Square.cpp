//Bismillahir Rahmanir Raheem
#include<bits/stdc++.h>
using namespace std;

#define memset(a, b) memset(a,b,sizeof(a));
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
#define endl "\n"; 
bool is_perfect_square(long long a)
{
    long long x;
    x = sqrt(a);
    return(x*x == a);
}

int main()
{
    optimize();
    int t;
    cin >> t;
    while(t--)
    {
        
        long long sum = 0;
        long long n;
        cin >> n;
        for(long long i = 1; i<=n; i++)
        {
            long long c;
            cin >> c;
            sum = sum + c;
        }
        if(is_perfect_square(sum))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    
    }
    return 0;
}