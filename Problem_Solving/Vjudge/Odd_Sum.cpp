#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 1; i<=t; i++)
    {
        int a, b, sum = 0;
        cin >> a;
        cin >> b;
        for(a; a<=b; a++)
        {
            if(a%2!=0)
            {
                sum += a;
            }
        }
        cout <<"Case "<<i<<": "<< sum << endl;
    }
}