#include <bits/stdc++.h>

using namespace std;

int main()
{
    string position;
    getline(cin, position);
    int length = position.size();
    int count = 0;
    for(int i = 0; i<length; i++)
    {
        if(position[i]==position[i+1])
        {
            count++;
            if(count == 6)
            {
                cout << "YES" << endl;
                return 0;
            }
        }
        else
        {
            count = 0;
        }
    }
    
    
        cout << "NO" << endl;
    
    return 0;
}