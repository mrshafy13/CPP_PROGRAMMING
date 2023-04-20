#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long int days, result=1, count = 1;
    cin >> days;
    long long int money[days];
    for(int i = 0; i<days; i++)
    {
        cin >> money[i];
    }
    for(long long int i = 1; i<days; i++)
    {
        if(money[i] >= money[i-1])
        {
            count++;
            if(count>result)
            {
                result = count;
            }
        }
        else
        {
            count = 1;
        }
    }
    cout << result << endl;
    return 0;
}