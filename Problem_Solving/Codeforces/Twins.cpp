//Bismillahir Rahmanir Raheem
#include<bits/stdc++.h>
using namespace std;

const int mx = 101;
int numbers[mx];


#define memset(a, b) memset(a,b,sizeof(a));
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
#define endl "\n";

int main()
{
    optimize();
    int n, all_sum = 0;
    cin >> n;
    for(int i = 0; i<n; i++)
    {
        cin >> numbers[i];
        all_sum = all_sum + numbers[i];
    }
    int count = 0, taken_sum = 0;
    sort(numbers, numbers+n, greater<int>());
    for(int i = 0; i<n; i++)
    {
        if(all_sum>= taken_sum)
        {
            count++;
            taken_sum = taken_sum + numbers[i];
            all_sum = all_sum - numbers[i];
        }
        else
        {
            break;
        }
    }
    cout << count << endl;
    return 0;
}