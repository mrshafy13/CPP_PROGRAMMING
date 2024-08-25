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
    priority_queue<pair<int,int>, vector<pair<int,int>>> q;
    q.push({2,-1});
    q.push({1,-5});
    q.push({1,-3});
    q.push({2,0});
    q.push({2,-8});
    q.push({4,-3});
    q.push({3,-4});
    
    while(!q.empty())
    {
        cout << q.top().first << " " << q.top().second << endl;
        q.pop();
    }
    cout << q.size() << endl;
    return 0;
}