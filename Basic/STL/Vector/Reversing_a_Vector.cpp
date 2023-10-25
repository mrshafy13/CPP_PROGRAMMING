#include<bits/stdc++.h>
using namespace std;

const int mx = 10e7;
int numbers[mx];
int main()
{
    vector<int> v = {5,3,1,4};
    reverse(v.begin(), v.end());
    for(auto u:v)
    {
        cout << u << " ";
    }
    cout << endl;
    return 0;
}