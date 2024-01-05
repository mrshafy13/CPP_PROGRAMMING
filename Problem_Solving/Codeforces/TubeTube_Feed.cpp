//Bismillahir Rahmanir Raheem
#include<bits/stdc++.h>
using namespace std;
#define memset(a, b) memset(a,b,sizeof(a));
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
#define endl "\n";

int main()
{
    optimize();
    int test_cases;
    cin >> test_cases;
 
    while(test_cases--)
    {
        int number_of_vid, time_to_eat;
        int length_of_vids[number_of_vid];
        int satisfaction_of_vids[number_of_vid];
        int index, time_required, previous_satisfaction = 0;
 
        cin >> number_of_vid >> time_to_eat;
 
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
            
            if(time_required <= time_to_eat)
            {
                if(previous_satisfaction < satisfaction_of_vids[i])
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