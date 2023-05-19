#include <bits/stdc++.h>

using namespace std;

int isPrime(long long n)
{
    if(n<=1)
    {
        return 1;
    }
    else
    {
        for(int i = 2; i<= sqrt(n); i++)
        {
            if(n%i == 0)
            {
                return 1;
            }
        }
    }
    return 0;
}

int main()
{
    int test_cases;
    cin >> test_cases;
    
    while(test_cases--)
    {
        long long number_of_candies, x;
        cin >> number_of_candies;
        int flag = 0;
        long long result;
        if(isPrime(number_of_candies) == 0)
        {
            cout << "1" << endl;
        }
        else if(number_of_candies % 3 == 0)
        {
            flag = 0;
            x = number_of_candies/3;
        }
        else if(number_of_candies % 2 == 0)
        {
            flag = 1;
            x = number_of_candies/3;
        }
        if(flag == 0)
        {
            for(x = x; x>=1;)
            {
                if(number_of_candies%x == 0)
                {
                    cout << x << endl;
                    break;
                }
                else
                {
                    x = x/3;
                }
            }
        }
        else if(flag == 1)
        {
            for(x  = x; x >= 2;)
            {
                if(number_of_candies % x == 0)
                {
                    cout << x << endl;
                    break;
                }
                else
                {
                    x = x/2;
                }
            }
        }
    }
    return 0;
}
