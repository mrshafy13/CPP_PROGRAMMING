#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector < int > v(10);

    int n;

    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    cout << v.size() << endl;
    for(int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}