#include<bits/stdc++.h>
using namespace std;

const int mx = 1e8;
int numbers[mx];

#define endl "\n"; 

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);

int main()
{
    optimize();
    int n;
    cin >> n;
    for(int i = 1; i<=n;i++)
    {
        cin >> numbers[i];
    }
    sort(numbers+1,numbers+n+1);
    for(int i = 1; i<=n; i++)
    {
        cout << numbers[i] << " ";
    }
    cout << endl;
    return 0;
}