#include<bits/stdc++.h>
using namespace std;

const int mx = 10e7;
int numbers[mx];
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        int length = s.size();
        int count = 0;
        for(int i = 0; i<length-1; i++)
        {
            if(s[i]!=s[i+1])
            {
                count++;
                i++;
            }
            else
            {
                continue;
            }
        }
        cout << count << endl;
    }
    return 0;
}