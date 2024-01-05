#include <bits/stdc++.h>
using namespace std;

const int mx = 1e8;
int numbers[mx];

#define memset(a, b) memset(a, b, sizeof(a));
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define fraction()                \
    cout.unsetf(ios::floatfield); \
    cout.precision(10);           \
    cout.setf(ios::fixed, ios::floatfield);
#define endl "\n";

string getPalindrome(string str)
{

    unordered_map<char, int> hmap;
    for (int i = 0; i < str.length(); i++)
        hmap[str[i]]++;

    int oddCount = 0;
    char oddChar;
    for (auto x : hmap)
    {
        if (x.second % 2 != 0)
        {
            oddCount++;
            oddChar = x.first;
        }
    }

    if (oddCount > 1 || oddCount == 1 && str.length() % 2 == 0)
        return "NO SOLUTION";

    string firstHalf = "", secondHalf = "";
    for (auto x : hmap)
    {

        string s(x.second / 2, x.first);

        firstHalf = firstHalf + s;
        secondHalf = s + secondHalf;
    }

    // Insert odd character if there
    // is any
    return (oddCount == 1)
               ? (firstHalf + oddChar + secondHalf)
               : (firstHalf + secondHalf);
}

int main()
{
    optimize();
    string str;
    cin >> str;
    cout << getPalindrome(str) << endl;
    return 0;
}