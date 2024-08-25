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
    queue <int> q;
    q.push(1);
    q.push(1);
    q.push(3);
    q.push(4);
    q.push(5);
    while(!q.empty())
    {
        cout << q.front() << endl;
        q.pop();
    }
    return 0;
}