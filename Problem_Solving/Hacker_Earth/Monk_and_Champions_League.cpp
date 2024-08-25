//Bismillahir Rahmanir Raheem
#include<bits/stdc++.h>
using namespace std;

const int mx = 1e8;
//int numbers[mx];


#define memset(a, b) memset(a,b,sizeof(a));
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
#define endl "\n";

int main()
{
    optimize();
    int m, n;
    cin >> m >> n;
    priority_queue <long long> x;
    for(int i = 1; i<= m; i++)
    {
        int a;
        cin >> a;
        x.push(a);
    }
    long long ans =0, count  = 0;
    while(!x.empty())
    {
        if(count == n)
        {
            break;
        }
        ans = ans+x.top();
        if(x.top() - 1 > 0) x.push(x.top()-1);
        x.pop();
        count++;
    }
    cout << ans << endl;
    return 0;
}