#include <bits/stdc++.h>

using namespace std;

int main()
{
    int number_of_socks, days;
    cin >> number_of_socks >> days;

    int number_of_days;
    

    for(int i = 1; i <= number_of_socks; i++)
    {
        if(i>=days && i%days==0)
        {
            number_of_socks++;
        }
    }
    
    number_of_days = number_of_socks;
    
    cout << number_of_days << endl;
    return 0;
}