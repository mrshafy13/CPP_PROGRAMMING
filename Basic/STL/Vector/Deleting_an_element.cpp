#include<bits/stdc++.h>
using namespace std;

const int mx = 10e7;
int numbers[mx];
int main()
{
    vector <int> v = {2, 3, 4, 5};
    for(auto u:v)
    {
        cout << u << " ";
    }
    cout << endl;
    cout << v.back() << endl; //0(1)
    v.pop_back(); //O(1)
    for(auto u:v)
    {
        cout << u << " ";
    }
    reverse(v.begin(), v.end());
    while(!v.empty())
    {
        cout << v.back() << endl;
        v.pop_back();
    }
    cout << endl;
    return 0;
}
