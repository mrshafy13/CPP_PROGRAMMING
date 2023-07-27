#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test_cases;
    cin >> test_cases;
    while(test_cases--)
    {
        int n, count = 1;
        cin >> n;
        string s1;
        cin >> s1;
        for(int i = 0; i<n;i++)
        {
            char temp_1 = s1[i], temp_2= s1[i+1];
            for(int j = i+2; j<n; j+2)
            {
                if(temp_1 != s1[j] && temp_2 != s1[i+1])
                {
                    count++;
                }
                else
                {
                    break;
                }
            }
        }
        cout << count << endl;
    }
    return 0;
}