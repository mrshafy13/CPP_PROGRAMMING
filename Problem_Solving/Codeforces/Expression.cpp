//Bismillahir Rahmanir Raheem
#include<bits/stdc++.h>
using namespace std;

const int mx = 3+1;
int numbers[mx];


#define memset(a, b) memset(a,b,sizeof(a));
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
#define endl "\n";

int main()
{
    optimize();
    int a, b, c;
    cin >> a >> b >> c;
    int sum_1 = a+b+c;
    int sum_2 = a*b*c;
    int sum_3 = (a+b) * c;
    int sum_4 = a * (b+c);
    vector<int> v;
    v.push_back(sum_1);
    v.push_back(sum_2);
    v.push_back(sum_3);
    v.push_back(sum_4);
    vector <int> :: iterator in = max_element(v.begin(), v.end());
    cout << *in << endl;
    return 0;
}