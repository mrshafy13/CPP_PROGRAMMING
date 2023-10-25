#include<bits/stdc++.h>
using namespace std;

const int mx = 10e7;
int numbers[mx];
int main()
{
    vector<int> v = {2,3,5,5,7,7,1};
    sort (v.begin(), v.end());//O(nlog2(n))
    int sz = unique (v.begin(), v.end())  - v.begin();//O(n)

    cout << sz << endl;

    for(int i = 0; i<sz; i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    return 0;
}