#include<bits/stdc++.h>
using namespace std;

const int mx = 1e8;
int numbers[mx];


#define memset(a, b) memset(a,b,sizeof(a));
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(5); cout.setf(ios::fixed,ios::floatfield);
#define endl "\n";

int division(int a, int b)
{
    int res;
    res = a/b;
    return res;
}
int reminder(int a, int b)
{
    int res;
    res = a%b;
    return res;
}
double frac(int a, int b)
{
    double res;
    res = (double)a/b;
    return res;
}

int main()
{
    optimize();
    int a, b;
    cin >> a >> b;
    cout << division(a, b) <<" " << reminder(a,b) <<" ";
    fraction();
    cout << frac(a, b) << endl;
    return 0;
}