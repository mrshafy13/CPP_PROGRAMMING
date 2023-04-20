#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    char word[n];
    for(int i = 0; i<n;i++)
    {
        cin >> word[i];
    }
    int range = 'z';
    int result[range+1] = {0};
    for(int i = 0; i <= n; i++)
    {
        word[i] = tolower(word[i]);
        result[word[i]] = 1;
    }
    for(int i = 'a'; i <= range; i++)
    {
        if(result[i] == 0)
        {
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "YES" << endl;
    return 0;
}