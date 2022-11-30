#include <iostream>
#include <math.h>
using namespace std;
int prime(int n)
{
    if(n!=2 && n%2==0)
    {
        return prime(n-1);
    }
    else if (n!=0 || n!= 1)
    {
        for(int i = 2; i <= n-1; i++)
        {
            if(n%i==0)
            {
                return prime(n-1);
            } 
        }
    }
    return n;
}

int main() 
{
    int n, result;
    cin >> n;
    result = prime(n);
    cout << result << endl;
    return 0;
}