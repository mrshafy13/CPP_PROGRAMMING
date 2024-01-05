#include<bits/stdc++.h>
using namespace std;

const int mx = 1e4+1;
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
    long long sum = 0;
    for(int i = 1; i<=n; i++)
    {
        cin >> numbers[i];
        sum = sum+numbers[i];
    }
    cout << *min_element(numbers+1, numbers+n+1) << " " << *max_element(numbers+1, numbers+n+1) << " " << sum << endl;
    return 0;
}