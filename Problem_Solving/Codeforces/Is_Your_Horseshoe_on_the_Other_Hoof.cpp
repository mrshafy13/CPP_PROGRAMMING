#include <bits/stdc++.h>

using namespace std;

int main()
{
    unsigned long long int shoes[4];
    for(int i = 0; i<4; i++)
    {
        cin >> shoes[i];
    }
    sort(shoes, shoes+4);
    int count = 0;
    for(int i = 0; i<4; i++)
    {
        if(shoes[i]==shoes[i+1])
        {
            count++;
        }
    }
    cout << count << endl;
    return 0;
}