#include<bits/stdc++.h>
using namespace std;

const int mx = 10e5 + 123;
int numbers[mx];
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        int temp;
        cin >> n;
        for(int i = 1; i <=n; i++)
        {
            cin >> numbers[i];
        }
        temp = numbers[1];
        int count = 1;
        for(int i = 2; i<=n; i++)
        {
            if( temp < numbers[i])
            {
                temp = temp;
                count = count;
            }
            else
            {
                temp = numbers[i];
                count = i;
            }
        }
        
        int sum = 0;
        for(int i = 1; i<=n; i++)
        {
            if(i != count)
            sum = sum + numbers[i];
        }
        cout <<sum<< endl;
    }
    return 0;
}