#include<bits/stdc++.h>
using namespace std;

const int mx = 10e7;
int numbers[mx];
int main()
{
    vector<int> v;
    int n;
    while(cin>>n)
    {
        if(n == 0)
        {
            break;
        }
        v.push_back(n);
    }
    cout << v.size() << endl;
    for(auto u:v)
    {
        cout << u << " ";
    }
    cout << endl;
    return 0;
}