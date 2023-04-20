#include <bits/stdc++.h>

using namespace std;

int main()
{
    string str;
    getline(cin, str);
    int count = 0;
    int length = str.size();
    sort(str.begin(), str.end());

    for(int i = 0; i< length-1; i++)
    {
        if(str[i]=='{'||str[i]=='}'||str[i]==' ' || str[i] == ',')
        {
            continue;
        }
        else
        {
            if(str[i]!=str[i+1])
            {
                count++;
            }
        }
    }
    cout << count << endl;
    return 0;
}