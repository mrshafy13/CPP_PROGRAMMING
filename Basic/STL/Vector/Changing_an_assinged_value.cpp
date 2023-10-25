#include<bits/stdc++.h>
using namespace std;

const int mx = 10e7;
int numbers[mx];
int main()
{
    vector<int> v;
    v.push_back(2);
    v.push_back(3);
    v.push_back(5);
    v.push_back(6);

    v[2] = 10;

    cout << v[2] << endl;
    return 0;
}