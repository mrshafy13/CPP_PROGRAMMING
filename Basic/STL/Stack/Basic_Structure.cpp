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
    //last in first out lifo

    stack <int> s;
    s.push(1);
    s.push(2);
    s.push(5);

    cout << s.size() << endl;
    cout << s.top() << endl; 
    s.pop();
    cout << s.top() << endl;
    

    return 0;
}