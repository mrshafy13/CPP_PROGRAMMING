#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    for ( int i = 1; i<= t; i++)
    {
        int r1, r2, r3, x, yz;
        cin >> r1 >> r2 >> r3;
        if(r1 > r2)
        {
            if(r1 > r3)
            {
                x = r1;
                yz = r2 + r3;
            }
            else
            {
                x = r3;
                yz = r1 + r2;
            }
        }
        else
        {
            if(r2 > r3)
            {
                x = r2;
                yz = r1 + r3;
            }
            else 
            {
                x = r3;
                yz = r1 + r2;
            }
        }
        if(x > yz)
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