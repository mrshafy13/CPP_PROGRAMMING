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
    deque<int>dq;
    dq.push_front(1);
    dq.push_front(2);
    dq.push_front(3);
    dq.push_back(4);
    dq.push_back(5);

    cout << dq.front() << " " << dq.back() << endl;
    dq.pop_front();
    cout << dq.front() << " " << dq.back() << endl;
    dq.pop_back();
    cout << dq.front() << " " << dq.back() << endl;

    cout << dq.size() << endl;
    cout << dq.empty() << endl;

    return 0;
}