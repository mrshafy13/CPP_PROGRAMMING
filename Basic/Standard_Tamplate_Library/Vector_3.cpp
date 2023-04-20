#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector <int> v = {1,2,3,4,5};

    v.resize(10);

    cout << v.size() << endl;

    for(int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    return 0;
}