#include<bits/stdc++.h>
using namespace std;

const long long mx = 1e6+123;
long long numbers[mx];


#define memset(a, b) memset(a,b,sizeof(a));
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
#define endl "\n";
void input(long long n)
{
    for(long long i = 1; i<=n;i++)
    {
        cin >> numbers[i];
    }
}
void solve(long long x,long long array[])
{
    long long temp = array[1];
    long long counter = 0;
    for(long long i = 2; i<=x;i++)
    {
        if(i != x)
        {
            if(temp < array[i])
            {
                temp = array[i];
            }
            else
            {
                break;
            }
        }
        else if(i==x)
        {
            if(array[x]>array[x-1])
            {
                temp = array[x];
            }
            else
            {
                temp = array[x-1];
            }
        }
    }
    
    
    cout << temp << endl;
}
int main()
{
    optimize();
    long long n;
    cin >> n;
    input(n);
    solve(n, numbers);
    return 0;
}