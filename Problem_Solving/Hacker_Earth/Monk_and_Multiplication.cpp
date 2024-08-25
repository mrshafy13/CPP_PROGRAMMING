//Bismillahir Rahmanir Raheem
#include<bits/stdc++.h>
using namespace std;

const int mx = 1e8;
int numbers[mx];


#define memset(a, b) memset(a,b,sizeof(a));
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
#define endl "\n";

int main()
{
    optimize();
    int n;
    cin >> n;
    for(int i = 0; i<n;i++)
    {
        cin >> numbers[i];
    }
    priority_queue<int>q;
    for(int i = 0; i<n; i++)
    {
        q.push(numbers[i]);
        if(q.size()>=3)
        {
            int a1 = q.top();
            q.pop();
            int a2 = q.top();
            q.pop();
            int a3 = q.top();
            q.pop();
            cout << 1LL * a1 * a2 * a3 << endl;
            q.push(a1);
            q.push(a2);
            q.push(a3);
        }
        else
        {
            cout << -1 << endl;
        }
    }
    return 0;
}