/**
 * This C++ program takes input of three numbers and finds the number that occurs only once among them.
 * 
 * @return The main function returns an integer value, which is 0 in this case.
 */
//Bismillahir Rahmanir Raheem
#include<bits/stdc++.h>
using namespace std;

const int mx = 3;
int numbers[mx];
int occur[10];

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
        memset(occur, 0);
        int temp;
        for(int i = 0; i<mx;i++)
        {
            cin >> numbers[i];
            occur[numbers[i]]++;
        }
        for(int i = 0; i<10;i++)
        {
            if(occur[i] == 1)
            {
                cout << i << endl;
                break;
            }
        }
    }
    return 0;
}