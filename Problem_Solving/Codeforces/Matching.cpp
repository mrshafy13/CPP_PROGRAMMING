#include<bits/stdc++.h>

using namespace std;

int main()
{
    int test_case;

    cin >> test_case;
    cin.get();
    for(int i = 1; i <= test_case; i++)
    {
        string number;
        getline(cin, number);
        int result = 1;
        int length = number.size();

        for(int i = 0; i<length; i++)
        {
            
            if(length >= 1)
            {
                if(number[i] == '?' && i == 0)
                {
                    result = result * 9;
                }
                else if(number[i]=='?')
                {
                    result = result * 10;
                }
            }
        }
        
            if(number[0] == '0')
            {
                result = 0;
            }
        cout << result << endl;
    }        

    return 0;
}