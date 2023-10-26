#include<bits/stdc++.h>
using namespace std;

const int mx = 3;
int numbers[mx];


#define memset(a, b) memset(a,b,sizeof(a));
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
#define endl "\n";

int main()
{
    optimize();
    int a, b, c;
    cin >> a >> b >> c;
    numbers[0] = a;
    numbers[1] = b;
    numbers[2] = c;
    sort(numbers, numbers+mx);
    cout << numbers[0] << " " << numbers[1] << " " << numbers[2];
    cout << endl;
    return 0;
}