//Bismillahir Rahmanir Raheem
//After reviewing the tutorial
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
    int t;
    cin >> t;
    while(t--)
    {
        long long n, count2 = 0, count3 = 0;
        cin >> n;
        while(n%2==0)
        {
            n = n/2;
            count2++;
        }
        while(n%3 == 0)
        {
            n = n/3;
            count3++;
        }
        if(n == 1 && count2 <= count3)
        {
            cout << 2 * count3 - count2 << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }
    return 0;
}