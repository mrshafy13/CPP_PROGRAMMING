#include<bits/stdc++.h>
using namespace std;

const int mx = 1e8;
int numbers[mx];
int counter[mx];

#define memset(a, b) memset(a,b,sizeof(a));
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
#define endl "\n";

int main()
{
    optimize();

    int n;
    cin >> n;

    for(int i = 1; i< 4*n ; i++)
    {
        cin >> numbers[i];
        counter[numbers[i]]++;
    }
    for(int i = 1; i<=4*n; i++)
    {
        if(counter[i] == 3)
        {
            cout << i << endl;
            break;
        }
    }
    return 0;
}