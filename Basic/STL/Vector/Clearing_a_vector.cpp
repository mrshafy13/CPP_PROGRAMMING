#include<bits/stdc++.h>
using namespace std;

const int mx = 10e7;
int numbers[mx];
int main()
{
    vector<int> v = {2, 3, 4, 5};
    v.clear();
    v = {2, 3};
    cout << v.size() << endl;
    cout << v.empty() << endl;
    return 0;
}