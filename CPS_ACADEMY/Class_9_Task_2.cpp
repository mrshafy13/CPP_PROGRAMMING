#include<bits/stdc++.h>
using namespace std;

const int mx = 1e8;
int numbers[mx];


#define memset(a, b) memset(a,b,sizeof(a));
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
#define endl "\n";
int area(int a, int b)
{
    int res = a*b;
    return res;
}
int perimeter(int a, int b)
{
    int res = 2*(a+b);
    return res;
}
int main()
{
    optimize();
    int a, b;
    cin >> a >> b;
    cout << area(a,b) << " " << perimeter(a, b) << endl;
    return 0;
}