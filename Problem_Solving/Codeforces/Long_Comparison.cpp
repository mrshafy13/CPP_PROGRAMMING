#include<bits/stdc++.h>

using namespace std;
long long int multiply(int num1, int num2)
{
    long long int result;
    result = num1*num2;
    return result;
}



int main()
{
    int test_cases;
    cin >> test_cases;
    while(test_cases--)
    {
        long long int x1, x2;
        int p1, p2;
        cin >> x1 >> p1;
        cin >> x2 >> p2;
        
        int mn = min(p1, p2);
        
        p1 = p1-mn;
        p2 = p2 - mn;

        if(p1>=7)
        {
            cout << ">" << endl;
        }
        else if(p2>=7)
        {
            cout << "<" << endl;
        }
        else
        {
            for(int i = 1; i<=p1; i++)
            {
                x1 = x1*10;
            }
            for(int i = 1; i<= p2; i++)
            {
                x2 = x2*10;
            }
            if(x1>x2)
            {
                cout << ">" << endl;
            }
            else if(x1<x2)
            {
                cout << "<" << endl;
            }
            else
            {
                cout << "=" << endl;
            }
        }

    }
    return 0;
}