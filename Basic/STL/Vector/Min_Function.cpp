#include<bits/stdc++.h>
using namespace std;

const int mx = 10e7;
int numbers[mx];
int main()
{
    vector<int> v = {2, 3, 5, 5, 7, 7, 1};
    int n = min_element(v.begin(), v.end()) - v.begin();
    cout << n << endl;
    vector <int > :: iterator it = min_element(v.begin(), v.end());
    cout << *it << endl; 
    return 0;
}