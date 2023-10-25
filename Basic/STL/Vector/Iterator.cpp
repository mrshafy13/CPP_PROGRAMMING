#include<bits/stdc++.h>
using namespace std;

const int mx = 10e7;
int numbers[mx];
int main()
{
    vector<int> v = {2,3,4,5};
    vector<int>::iterator it;

    for(it = v.begin(); it!=v.end();it++) 
    {
        cout << *it <<" ";
    }
    return 0;
}