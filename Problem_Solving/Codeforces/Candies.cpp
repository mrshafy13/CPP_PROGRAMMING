#include <bits/stdc++.h>

using namespace std;


int main()
{
    int test_cases;
    cin >> test_cases;
    
    while(test_cases--)
    {
        long long number_of_candies, x = 1, r = 2;
        cin >> number_of_candies;
        for(int i = 2;;i++)
        {
            x = number_of_candies/(pow(2,i)-1);
            long long checker;
            checker = x*(pow(2,i)-1);
            if(checker == number_of_candies)
            {
                cout << x << endl;
                break;
            }
        }
    }
    return 0;
}
