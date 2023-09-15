#include<bits/stdc++.h>
using namespace std;

const int mx = 10e7;
char numbers[mx];
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        for(int i = 1; i<=n; i++)
        {
            cin >> numbers[i];
        }
        int mid = n/2;
        int count = 0;
        int j = n;
        for(int i = 1; i<= mid; i++)
        {
            if(numbers[i]!=numbers[j])
            {
                count++;
            }
            j--;
        }
        cout << (count+1)/2 << endl;
        
    }
    return 0;
}