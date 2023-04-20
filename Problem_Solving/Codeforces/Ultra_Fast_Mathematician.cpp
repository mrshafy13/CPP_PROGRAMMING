#include <bits/stdc++.h>

using namespace std;

int main()
{
    string number_one, number_two;

    getline(cin, number_one);
    getline(cin, number_two);

    for(int i = 0; i < number_two.size(); i++)
    {
        if(number_two[i] == number_one[i])
        {
            cout << "0";
        }
        else
        {
            cout << "1";
        }
    }

    return 0;
}