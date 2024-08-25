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
    int t;
    cin >> t;
    while(t--)
    {
        priority_queue<long long> x;
        long long n;
        cin >> n;
        for(int i = 1; i<=n; i++)
        {
            long long a;
            cin >> a;
            x.push(-a);
        }
        long long ans = 0;
        while(x.size() > 1)
        {
            long long a, b;
            a = x.top();
            x.pop();
            b = x.top();
            x.pop();
            ans = abs(-ans+a+b);
            x.push(a+b);
            
        }
        cout <<  ans << endl;
    }
    

    return 0;
}