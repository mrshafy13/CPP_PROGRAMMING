//Bismillahir Rahmanir Raheem
#include<bits/stdc++.h>
using namespace std;

const long long mx = 1e5+10;
long long numbers[mx];


#define memset(a, b) memset(a,b,sizeof(a));
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
#define endl "\n";

int main()
{
    optimize();
    long long initial_house = 1;
    long long n , m;
    cin >> n >> m;
    for(int i = 0; i<m;i++)
    {
        cin >> numbers[i];
    }
    long long time = 0;
    for(int i = 0; i<m; i++)
    {
        if(initial_house > numbers[i])
        {
            time = time + abs(n - initial_house)+1;
            initial_house = 1;
            time = time + abs(numbers[i] - initial_house);
            initial_house = numbers[i];
        }
        else
        {
            time = time + abs(numbers[i]-initial_house);
            initial_house = numbers[i];
        }
    }
    cout << time << endl;
    return 0;
}