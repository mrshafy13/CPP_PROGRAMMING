#include <bits/stdc++.h>
using namespace std;
int main()
{
    int testcases;
    cin >> testcases;
    while (testcases-- )
    {
        int number_of_donation;
        cin >> number_of_donation;
        if(number_of_donation<=3)
        {
            cout << "BRONZE" << endl;
        }
        else if(number_of_donation>3 && number_of_donation<=6)
        {
            cout << "SILVER" << endl;
        }
        else
        {
            cout << "GOLD" << endl;
        }
    }
    return 0;

}