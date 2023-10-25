#include<bits/stdc++.h>
using namespace std;

const int mx = 10e7;
int numbers[mx];
int main()
{
    int a[] = {2, 3, 4, 5};
    vector<int> v = {5,3,4,1,1,2};
    //partial sorting is possible in vector
    //sorting in increasing order
    cout << "partial sorting: ";
    sort(v.begin()+1,v.begin()+5); //O(nlog(2)n)
    sort (a, a+4);
    for(auto u:v)
    {
        cout << u << " ";
    }
    cout << endl;
    sort (v.begin(), v.end());
    cout << "increasing order: ";
    for(auto u:v)
    {
        cout << u << " ";
    }
    cout << endl;
    cout << "decreasing partial sorting order using greater method: ";
    //sorting in decreasing order
    
    sort(v.begin()+1,v.begin()+5, greater<int>());
    for(auto u:v)
    {
        cout << u << " ";
    }
    cout << endl;
    cout << "decreasing order using rbegin(), rend(): ";
    sort (v.rbegin(), v.rend());
    for(auto u:v)
    {
        cout << u << " ";
    }
    cout << endl;
    return 0;
}