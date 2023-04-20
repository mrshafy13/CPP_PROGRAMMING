#include <bits/stdc++.h>

using namespace std;

int main()
{
    int NumberBottle, total_volume;
    double result;
    cin >> NumberBottle;
    for(int i = 0; i<NumberBottle; i++)
    {
        int volume;
        cin >> volume;
        total_volume = total_volume+volume;
    }
    result = (double)total_volume/NumberBottle;
    cout << result <<endl;
    return 0;
}