#include<bits/stdc++.h>
using namespace std;

const int mx = 1e8;
long long numbers[mx];


#define memset(a, b) memset(a,b,sizeof(a));
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
#define endl "\n";

int main()
{
    optimize();
    int n;
    cin >> n;
    long long count = 0;
    for(int i = 1; i<=n; i++)
    {
        cin >> numbers[i];
    }
    for(int i = 1; i<n;i++)
    {
        if(numbers[i]>numbers[i+1])
        {
            count = count + abs(numbers[i] - numbers[i+1]);
            numbers[i+1] = numbers[i];
        }
    }
    cout << count << endl;
    return 0;
}