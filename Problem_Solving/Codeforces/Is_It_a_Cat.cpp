#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    char meow_1[] = {'m'};
    char meow_2[] = {'e'};
    char meow_3[] = {'o'};
    char meow_4[] = {'w'};
    while(t--)
    {
        int n;
        cin >> n;
        char cat[n];
        char temp;
        int count = 1;
        for(int i = 0; i<n;i++)
        {
            cin >> cat[i];
            cat[i] = tolower(cat[i]);
        }
        for(int i = 0; i<n-1; i++)
        {
            
            if(count == 1)
            {
                if(cat[i]!='m')
                {
                    cout << "NO" << endl;
                    break;
                }
            }
            else if(count == 2)
            {
                if(cat[i]!='e')
                {
                    cout << "NO" << endl;
                    break;
                }
            }
            else if(count == 3)
            {
                if(cat[i]!='o')
                {
                    cout << "NO" << endl;
                    break;
                }
            }
            else if(count == 4)
            {
                if(cat[i] != 'w')
                {
                    cout << "NO" <<endl;
                    break;
                }
            }
            temp = cat[i];

            if(cat[i+1]!=temp && count==4)
            {
                count = 1;
            }
            if(cat[i+1]!=temp)
            {
                count++;
            }
        }
        cout << "YES" << endl;
    }
    return 0;
}