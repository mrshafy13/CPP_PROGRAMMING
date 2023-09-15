#include <bits/stdc++.h>

const int mx = 1e5+123;
int a[mx];
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    int count = 0;
    for(int i = 1; i<=n; i++)
    {
        cin >> a[i];
    }
    for(int i=1; i<=n;i++)
    {
        for(int j = i+1; j<=n; j++)
        {
            if (a[i]+a[j] == k)
            {
                count++;
            }
        }
    }
    cout << count << endl;
    return 0;
}
/*
Here we are using a nested loop, the first loop is iterating from
1 to n and the second one is iterating from i+1 to n.
suppose the value of n = 5, so the first loop will run for 5 times
and the second loop n(n-1)/2 or n^2-n/2
so we can say that the big-O(n^2) is the complexity of this program.
*/