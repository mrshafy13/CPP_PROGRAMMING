#include <bits/stdc++.h>
using namespace std;

const int mx = 4;
int numbers[mx];
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        bool flag = false;
        for (int i = n; i >= 1; i--)
        {
            if (i % 3 == 0)
            {
                i--;
            }
            for (int j = i - 1; j >= 1; j--)
            {
                if (j % 3 == 0)
                {
                    j--;
                }
                for (int k = j - 1; k >= 1; k--)
                {
                    if (k % 3 == 0)
                    {
                        k--;
                    }
                    {
                        if ((i + j + k) == n)
                        {
                            flag = true;
                            numbers[1] = i;
                            numbers[2] = j;
                            numbers[3] = k;
                            break;
                        }
                    }
                }
            }
        }
        if (flag == true)
            {
                cout << "YES" << endl;
                cout << numbers[1] << " " << numbers[2] << " " << numbers[3] << endl;
            }
            if (flag == false)
            {
                cout << "NO" << endl;
            }
    }
    return 0;
}