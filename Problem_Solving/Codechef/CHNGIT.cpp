#include <bits/stdc++.h>

using namespace std;

const int mx = 123;

int numbers[mx];

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;
        int temp = 0;
        
        for(int i= 1; i<=n; i++)
        {
            cin >> numbers[i];
        }
        for(int i = 1; i<=n ; i++)
        {
            int count = 0;
            for(int j = 1; j <=n; j++)
            {
                
                if(numbers[j]==numbers[i])
                {
                    count++;
                }
                if(count>temp)
                {
                    temp = count;
                }
            }
        }
        cout << n - temp << endl;
    }

    return 0;
}
