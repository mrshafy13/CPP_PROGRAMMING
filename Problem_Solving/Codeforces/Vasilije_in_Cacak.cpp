//Bismillahir Rahmanir Raheem
#include<bits/stdc++.h>
using namespace std;

const int mx = 1e8;
//int numbers[mx];


#define memset(a, b) memset(a,b,sizeof(a));
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
#define endl "\n";

int main()
{
    optimize();
    int t;
    cin >> t;
    while(t--)
    {
        long long n, k, x, min_sum, max_sum;
        cin >> n >> k >> x;
        min_sum = (k * (1+k))/2;
        long long first_num = (n-k) + 1;
        long long last_num = n;
        max_sum = (k * (first_num+last_num))/2;
        if(x>= min_sum && x<=max_sum)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
        //cout << min_sum << " " << max_sum << endl;;
    }
    return 0;
}