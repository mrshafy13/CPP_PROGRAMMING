#include<bits/stdc++.h>

using namespace std;

int main()
{
    int test_cases;
    cin >> test_cases;

    while(test_cases--)
    {
        int number_of_vid, time_to_eat;
        cin >> number_of_vid >> time_to_eat;
        int length_of_vids[number_of_vid];
        int satisfaction_of_vids[number_of_vid];
        int index, time_required, previous_satisfaction = 0;

        for(int i = 0; i<number_of_vid;i++)
        {
            cin >> length_of_vids[i];
        }
        for(int i = 0; i < number_of_vid; i++)
        {
            cin >> satisfaction_of_vids[i];
        }
        
        for(int i = 0; i<number_of_vid; i++)
        {
            time_required = length_of_vids[i]+i;
            previous_satisfaction = previous_satisfaction;
            if(time_required <= time_to_eat)
            {
                if(previous_satisfaction <= satisfaction_of_vids[i])
                {
                    index = i;
                }
            }
            previous_satisfaction = satisfaction_of_vids[index];
        }
        if(length_of_vids[index] <= time_to_eat)
        {
            cout << index+1 << endl;
        }
        else
        {
            cout << "-1" << endl;
        }
    }

    return 0;
}