#include<bits/stdc++.h>
using namespace std;

const int mx = 10e7;
int numbers[mx];
int main()
{
    vector <int> v(10, 5);
    v[4] = 10;
    for(int i= 0; i<v.size();i++)
    {
        cout << v[i] << " ";
    }
    cout<< endl << v.size() << endl;
    return 0;
}