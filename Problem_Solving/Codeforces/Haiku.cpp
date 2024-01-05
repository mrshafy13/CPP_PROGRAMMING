#include<bits/stdc++.h>
using namespace std;

const int mx = 1e8;
//int numbers[mx];


#define memset(a, b) memset(a,b,sizeof(a));
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
#define endl "\n";

bool isVowel(char c)
{
    return(c == 'a'|| c=='e'|| c=='i'||c=='o'||c == 'u');
}

int main()
{
    optimize();
    
    vector <string> v;

    int count[] = {5,7,5};

    for(int i = 0; i< 3; i++)
    {
        string s;
        char c;
        cin >> c;
        getline(cin, s);

        s = c + s;

        v.push_back(s);
    }
    for(int i = 0; i<3;i++)
    {
        int c = 0;
        for( auto u : v[i])
        {
            if(isVowel(u))
            {
                c++;
            }
        }
        if (c != count[i])
        {
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "YES" << endl;
    return 0;
}