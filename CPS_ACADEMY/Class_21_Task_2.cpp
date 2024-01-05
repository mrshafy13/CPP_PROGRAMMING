#include<bits/stdc++.h>
using namespace std;




#define memset(a, b) memset(a,b,sizeof(a));
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
#define endl "\n";

int main()
{
    optimize();
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i<n;i++)
    {
        cin >> v[i];
    }
    reverse(v.begin(), v.end());
    for(int i = 0; i<n;i++)
    {
        if(i != n-1)
        {
            cout << v[i] << " ";
        }
        else
        {
            cout << v[i];
        }

    }
    cout << endl;
    return 0;
}