#include<bits/stdc++.h>
using namespace std;

const int mx = 1e8;
int numbers[mx];


#define memset(a, b) memset(a,b,sizeof(a));
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(6); cout.setf(ios::fixed,ios::floatfield);
#define endl "\n";
double area(double a)
{
    double res;
    res = M_PI * a * a;
    return res;
}
double circumference(double a)
{
    double res;
    res = 2 * M_PI * a;
    return res;
}
int main()
{
    optimize();
    double r;
    cin >> r;
    fraction();
    cout << area(r) << " " << circumference(r) << endl;
    return 0;
}