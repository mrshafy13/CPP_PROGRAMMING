#include<bits/stdc++.h>
using namespace std;

const int mx = 10e7;
int numbers[mx];
int main()
{
    vector<int> v = {2, 3, 4, 5};
    vector<int> temp;
    temp = v;
    cout << temp.size() << endl;
    for (int i = 0; i < temp.size(); i++)
    {
        cout << temp[i] << " ";
    }
        
    return 0;
}