#include<bits/stdc++.h>

using namespace std;

int main()
{
    int target;
    int month[12];
    cin >> target;
    for(int i = 0; i < 12; i++)
    {
        cin >> month[i];
    }
    int temp;
    for(int i = 0; i<12;i++)
    {
        int flag = 0;
        for(int j = 0; j<11;j++)
        {
            if(month[j]<month[j+1])
            {
                temp = month[j];
                month[j] = month [j+1];
                month[j+1] = temp;
                flag = 1;
            }
        }
        if(flag == 0)
        {
            break;
        }
    }
    int gain = 0;
    int count = 0;
    for(int i = 0; i<12; i++)
    {
        if(gain < target)
        {
            gain = gain + month[i];
            count++;
        }
        if(gain > target)
        {
            break;
        }
    }
    if(gain >= target)
    {
        cout << count << endl;
    }
    if(gain < target)
    {
        cout << "-1" << endl;
    }
    return 0;
}