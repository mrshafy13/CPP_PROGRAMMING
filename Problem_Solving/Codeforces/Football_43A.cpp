//Bismillahir Rahmanir Raheem
#include<bits/stdc++.h>
using namespace std;

const int mx = 101;
int numbers[mx];
int count[mx];

#define memset(a, b) memset(a,b,sizeof(a));
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
#define endl "\n";

int main()
{
    optimize();
    vector < string > s;
    int n;
    cin >>  n;
    while(n--)
    {
        string str;
        cin >> str;
        s.push_back(str);
    }
    sort(s.begin(), s.end());
    int a = 1;
    for(int i = 0; i<s.size()-1; i++)
    {
        if(s[i] == s[i+1])
        {
            a++;
        }
        else
        {
            break;
        }
    }
    int b = s.size() - a;
    if(a > b)
    {
        cout << *min_element(s.begin(), s.end()) << endl;
    }
    else
    {
        cout << *max_element(s.begin(),s.end()) << endl;
    }
    return 0;
}