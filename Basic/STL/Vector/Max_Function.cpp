#include<bits/stdc++.h>
using namespace std;

const int mx = 10e7;
int numbers[mx];
int main()
{
    vector<int> v = {2,3,5,5,7,7,1};
    vector<int> :: iterator it = max_element(v.begin()+1, v.begin()+4);
    cout << *it <<endl;
    int n = max_element(v.begin()+1, v.begin()+4) - v.begin();
    cout << n << endl;
    vector<int> :: iterator in = max_element(v.begin(), v.end());
    cout << *in << endl;
    int x = max_element(v.begin(), v.end()) - v.begin();
    cout << x  << endl;
    return 0;
}