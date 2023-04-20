#include<bits/stdc++.h>

using namespace std;

int	main()
{
    long long int balance;
    cin >> balance;
    string negative;
    if(balance>=0)
    {
        cout << balance << endl;
    }
    else
    {
        negative = to_string(balance);
        int length = negative.size();
        if(negative[length - 2]>= negative [length-1])
        {
            swap(negative[length-1], negative[length-2]);
        }
        if(negative[1] != '0')
        {
            for(long long int i = 0; i<length-1; i++)
            {
                cout << negative[i];
            }
        }
        else
        {
            for(int i=1; i < length-1; i++)
            {
                cout << negative[i];
            }
        }
        cout << endl;
    }
    return 0;
}
