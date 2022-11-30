#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    for(int i = 1; i<=t; i++)
    {
        int n;
        cin >> n;
        if(n>1 && n%2 == 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}