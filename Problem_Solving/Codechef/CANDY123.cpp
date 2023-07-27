#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int a, b;
    cin >> a >> b;
    int Bob= 0, Limak = 0;
    for(int i = 1;; i++)
    {
        if(i%2 == 0)
        {
            Bob = Bob+i;
            if(Bob > b)
            {
                cout << "Limak" << endl;
                break;
            }
        }
        else
        {
            Limak = Limak + i;
            {
                if(Limak > a)
                {
                    cout << "Bob" << endl;
                    break;
                }
            }
        }
    }
}

int main()
{
    int test_cases;
    cin >> test_cases;
    while(test_cases--)
    {
        solve();
    }
}