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
    map <string, int> id;
    id["shahriar"] = 1;
    id["momo"] = 3;
    id["sharif"] = 4;  
    id["prety"] = 9;

    cout << id["sharif"] << endl;

    map <string, string> gender;

    gender["shahriar"] = "male";
    gender["momo"] = "female";

    cout << gender["shahriar"] << " " << gender["momo"] << endl;

    return 0;
}