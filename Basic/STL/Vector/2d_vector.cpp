#include <bits/stdc++.h>
using namespace std;

const int mx = 10e7;
int numbers[mx];
int main()
{
    vector<vector<int>> v;
    vector<int> a1 = {2, 3, 4};
    vector<int> a2 = {2, 3, 4, 5, 6, 7};
    vector<int> a3 = {2, 3, 4, 6, 8, 10};
    v.push_back(a1);
    v.push_back(a2);
    v.push_back(a3);

    for (auto u : v)
    {
        for (auto g : u)
        {
            cout << g <<" ";
        }
        cout << endl;
    }

    return 0;
}