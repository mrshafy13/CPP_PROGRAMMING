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
    string str;
    cin >> str;
    int upper_case = 0, lower_case = 0;
    for(int i = 0; i< str.size(); i++)
    {
        if(isupper(str[i]))
        {
            upper_case++;
        }
        else
        {
            lower_case++;
        }
    }
    if(lower_case == 1 && islower(str[0]))
    {
        str[0] = toupper(str[0]);
        for(int i = 1; i<str.size();i++)
        {
            str[i] = tolower(str[i]);
        }
    }
    else if(upper_case == str.size())
    {
        for(int i = 0; i<str.size();i++)
        {
            str[i] = tolower(str[i]);
        }
    }
    cout << str << endl;
    return 0;
}