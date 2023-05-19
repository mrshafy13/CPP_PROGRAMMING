#include<bits/stdc++.h>

using namespace std;

int main()
{
    int test_cases;

    cin >> test_cases;

    while (test_cases--)
    {
        int number_of_members, number_of_discussions;
        cin >> number_of_members >> number_of_discussions;

        int positive_count = 0, negative_count = 0;
        char votes[number_of_discussions];
        for(int i = 1; i <= number_of_members; i++);
        {
            cin >> votes;
            
        }
        for(int j = 0; j<number_of_discussions; j++)
            {
                if(votes[j]=='+')
                {
                    positive_count++;
                }
                else
                {
                    negative_count++;
                }
            }
        cout << positive_count <<" " << negative_count << endl;
    }

    return 0;
}