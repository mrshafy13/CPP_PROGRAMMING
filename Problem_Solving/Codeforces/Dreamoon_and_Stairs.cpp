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
    int n;
    cin >> n;
    int m;
    cin >> m;
    if(m>n)
    {
        cout << -1 << endl;
    }
    else
    {
        int steps;
        if(n%2 == 0)
        {
            steps = n/2;
        }
        else
        {
            steps = (n/2) + 1;
        }
        while(steps % m != 0)
        {
            steps++;
        }
        cout << steps << endl;
    }
    return 0;
}