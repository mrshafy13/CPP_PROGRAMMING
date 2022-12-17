#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s1, s2;

    int x=0;

    getline(cin, s1);
    getline(cin, s2);

    int len1 = s1.size();
    int len2 = s2.size();
    
    if(len1==len2)
    {
        for(int i = 0; i < len1; i++)
        {
            s1[i] = tolower(s1[i]);
            s2[i] = tolower(s2[i]);
            if(s1[i]<s2[i])
            {
                x = -1;
                break;
            }
            else if(s1[i]>s2[i])
            {
                x = 1;
                break;
            }
        }
    }  
    cout << x << endl;
    return 0;
}