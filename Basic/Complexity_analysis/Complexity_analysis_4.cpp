#include <bits/stdc++.h>

using namespace std;

const int mx = 10e5+123;
int a[mx];

int main()
{
    int n;
    cin >> n;
    for(int i = 1; i<=n; i++)
    {
        cin >> a[i];
    }

    int count = 0;

    for(int i = 1; i<=n; i++)
    {
        for(int j = i+1;j<=n;j++)
        {
            for(int k = j+1; k<=n; k++)
            {
                if(a[i]<a[j] && a[j]>a[k])
                {
                    count++;
                }
            }
        }
    }
    cout << count << endl;
    return 0;
}