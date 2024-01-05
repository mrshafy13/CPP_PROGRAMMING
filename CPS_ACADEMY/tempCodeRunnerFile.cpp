#include<bits/stdc++.h>
using namespace std;

const int mx = 100;
int matrix[mx][mx];
int vectors[mx][1];

int results[mx][1];


#define memset(a, b) memset(a,b,sizeof(a));
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
#define endl "\n";
void input_matrix(int a, int b)
{
    for(int i = 0; i<a; i++)
    {
        for(int j = 0; j<b; j++)
        {
            cin >> matrix[i][j];
        }
    }
}
void input_vectors(int a)
{
    for(int i = 0; i<a; i++)
    {
        cin >> vectors[i][0];
    }
}
int main()
{
    optimize();
    int n,m;
    cin >> n >> m;
    input_matrix(n,m);
    input_vectors(m);
    for(int i = 0; i<n; i++)
    {
        for(int j = 0; j<m; j++)
        {
            int temp = (matrix[i][j] * vectors[j][0]);
            results[i][0] = (results[i][0] + temp);
        }
        
    }
    
    for(int i = 0 ; i<n; i++)
    {
        cout << results[i][0] << endl;
    }
    return 0;
}