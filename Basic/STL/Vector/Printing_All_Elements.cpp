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

    for(int i = 0; i<v.size();i++)
    {
        cout << v[i] <<" ";
    }
    cout << endl;
    return 0;
}