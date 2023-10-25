#include<bits/stdc++.h>
using namespace std;

const int mx = 10e7;
int numbers[mx];
int main()
{
    int n;
    vector<int> v;
    cin >> n;
    for(int i = 0; i<n; i++)
    {
        int a;
        cin >> a;
        v.push_back(a);
    }
    cout << v.size() << endl;
    for(int i = 0; i<v.size();i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    return 0;
}