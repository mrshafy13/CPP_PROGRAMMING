#include <bits/stdc++.h>

using namespace std;

int main()
{
    int NumberMagnets;
    cin>> NumberMagnets;

    int pattern, previous_pattern, count = 0;

    for(int i = 1; i<= NumberMagnets; i++)
    {
        cin >> pattern;
        if(count == 0)
        {
            previous_pattern = pattern;
            count++;
        }
        
        if(previous_pattern != pattern)
        {
            count++;
        }
        previous_pattern = pattern;
    }
    cout << count << endl;
    //cout << count << endl;
    return 0;
}