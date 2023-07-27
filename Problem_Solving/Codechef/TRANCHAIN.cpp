#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int number_of_people;
    cin >> number_of_people;
    char blood_types[number_of_people];
    int chain = 0, max_chain = 0;
    string ab = "AB", a = "A", b = "B", o = "O";
    for(int i = 0; i< number_of_people; i++)
    {
        cin >> blood_types[i];
    }
    for(int i = 0; i <= number_of_people; i++)
    {
        for (int j = 0; i <= number; j++)
        {
            if(blood_types[i] == 'A')
            {
                char temp = blood_types[i];
                if(i != j)
                {
                    if(temp == a || temp == ab)
                    {
                        chain++;
                    }
                }
            }
            if(blood_types[i] == 'B')
            {
                string temp = blood_types[i];
                if(i != j)
                {
                    if(temp == b || temp == ab)
                    {
                        chain++; 
                    }
                }
            }
            if(blood_types[i] == 'O')
            {
                char temp = blood_types[i];
                if(i != j)
                {     
                    chain++;
                }
            }
            if(blood_types[i] == 'AB')
            {
                char temp = blood_types[i];
                if(i != j)
                {
                    if(temp == ab)
                    {
                        chain++;
                    }
                }
            }
        }
        if(chain>max_chain)
        {
            max_chain = chain;
        }
    };
    cout << max_chain << endl;
}

int main()
{
    int test_cases;
    cin >> test_cases;
    while(test_cases--)
    {
        solve;
    }
}