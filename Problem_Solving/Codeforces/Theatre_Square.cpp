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
    long double a, b, c, temp;
    cout.precision(22);
    cin >> a >> b >> c;
    if(b > a)
    {
        temp = b;
        b = a;
        a = temp;
    }
    if(c >= b)
    {
        cout << ceil(a/c) << endl;
    }
    else
    {
        cout << ceil(b/c) * ceil(a/c) << endl;
    }
    return 0;
}