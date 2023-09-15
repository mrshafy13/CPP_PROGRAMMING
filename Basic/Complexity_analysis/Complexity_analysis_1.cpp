#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n = 10e5; 
    long long sum = 0;
    for(int i = 0; i<=n; i++)
    {
        sum += i;
    }
    cout << sum << endl;
}

/*in this program time complexity is big-O(n)
online judges like codeforces can perform 10e9 operations 
in a sec.
but others can perform 10e8 operations.
so it is a good practice to write a code which is capable of
processing 10e8 or less in a second.
always check the time limit before solving a problem.
*/
