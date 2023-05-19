#include <bits/stdc++.h>

using namespace std;

int main()
{
    int test_cases;
    cin >> test_cases;
    long long int numbers[3];
    while (test_cases--)
    {
        long long int a,b,c;
        cin >> a >> b >> c;
        if((a+c)%(2*b) == 0)
        {
            cout << "YES" << endl;
        }
        else if(((2*b-a)>0) && ((2*b-a)%c == 0))
        {
            cout << "YES" << endl;
        }
        else if(((2*b-c)>0) && ((2*b-c)%a == 0))
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