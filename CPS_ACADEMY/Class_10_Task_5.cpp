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
    int n;
    cin >> n;
    string str = to_string(n);
    int length = str.size();
    int sum = 0;
    int a, b, c;

    a = str[0] - '0';
    b = str[1] - '0';
    c = str[2] - '0';

    sum = sum + a*100 + b*10 + c;
    sum = sum + b*100 + c*10 + a;
    sum = sum + c*100 + a*10 + b;

    cout << sum << endl;
    return 0;
}