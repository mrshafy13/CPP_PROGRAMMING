#include <bits/stdc++.h>

using namespace std;

int main()
{
    int number_of_test_cases;

    cin >> number_of_test_cases;

    for(int i = 1; i <= number_of_test_cases; i++)
    {
        long long int hit_point, void_absorption, lightning_strike;

        cin >> hit_point >> void_absorption >> lightning_strike;
        int keeper;
        {
            for(int j = 1; j <= void_absorption; j++)
            {
                keeper = hit_point;
                hit_point = (hit_point/2)+10;
                if(keeper < hit_point)
                {
                    hit_point = keeper;
                    break;
                }
            }
        }
        for(int x = 1; x<=lightning_strike; x++)
        {
            hit_point = hit_point - 10;
        }
        if( hit_point <= 0)
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