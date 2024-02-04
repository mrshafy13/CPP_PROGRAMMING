//Bismillahir Rahmanir Raheem
#include<bits/stdc++.h>
using namespace std;

const int mx = 51;
//int numbers[mx];


#define memset(a, b) memset(a,b,sizeof(a));
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
#define endl "\n";

int main()
{
    optimize();
    int n , m;
    cin >> m >> n;
    vector<int> v;
    for(int i = 1; i<=n; i++)
    {
        int a;
        cin >> a;
        v.push_back(a);
    }
    if(m == n)
    {
        cout << *max_element(v.begin(),v.end()) - *min_element(v.begin(),v.end()) << endl;
        return 0;
    }
    sort (v.begin(),v.end());
    vector<int> diff;
    int x = n - m;
    for(int i = 0; i<=x; i++)
    {
        int d;
        int k = i+m;
        vector <int> :: iterator max = max_element(v.begin()+i, v.begin()+k);
        vector <int> :: iterator min = min_element(v.begin()+i, v.begin()+k);
        d = *max - *min;
        diff.push_back(d);
    }
    cout << *min_element(diff.begin(), diff.end()) << endl;
    return 0;
}