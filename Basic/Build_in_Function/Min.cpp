#include<bits/stdc++.h>
using namespace std;

const int mx = 1e8;
int numbers[mx];

#define endl "\n" 

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);

int main()
{
    optimize();
    int a ,b;
    cin >> a >> b;
    cout << "Minimum of " << a << " and " << b << " is = " << min(a, b) << endl;
    return 0;
}