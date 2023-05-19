#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test_cases;
    cin >> test_cases;
    while(test_cases--)
    {
        int n;
        cin >> n;
        int numbers[n];
        for(int i = 0; i<n;i++)
        {
            cin >> numbers[i];
        }
        int count = 0;
        for(int j = 0; j<n; j++)
        {
            for(int i = j; i<n-1; i++)
            {
                if(numbers[i]>numbers[i+1])
                {
                    count++;
                }
            }
        }
        cout << count << endl;
    }
    return 0;
}