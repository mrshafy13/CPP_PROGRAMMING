#include<bits/stdc++.h>

using namespace std;
const long long mx = 10e5;
long long coordinates[mx] = {0};
long long difference[mx];
int main()
{
    int cities;
    cin >> cities;
    
    for(int i = 0; i< cities; i++)
    {
        cin >> coordinates[i];
    }
    for(int i = 0; i<cities; i++)
    {
        int mxy, mini;
        if(i == 0)
        {
            mini = abs(coordinates[i]-coordinates[i+1]);
            mxy = abs(coordinates[i] - coordinates[cities-1]);
        }
        else if (i == (cities - 1))
        {
            mini = abs(coordinates[i]-coordinates[i-1]);
            mxy = abs(coordinates[i] - coordinates[0]);
        }
        else
        {
            int x, y;
            x = abs(coordinates[i] - coordinates[i+1]);
            y = abs(coordinates[i]- coordinates[i-1]);
            mini = min(x,y);
            x = abs(coordinates[i] - coordinates[0]);
            y = abs(coordinates[i] - coordinates[cities-1]);
            mxy = max(x,y);
        }
        cout << mini << " " << mxy << endl;
    }
    return 0;
}