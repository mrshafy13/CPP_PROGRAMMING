#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main()
{
    char name[25][50], temp[25];
    int n, i, j;


    cout << "Input The Number of Strings: ";
    cin >> n;

    for(i = 0; i<n;i++)
    {
        cout << "Enter String No "<< i+1 << ": \n";
        cin >> name[i];
    }

    for (i = 1; i<= n; i++)
    {
        for(j = 0; j < n-1; j++)
        {
            if(strcmp(name[j], name[j+1])>0)
            {
                strcpy(temp, name[j]);
                strcpy(name[j], name[j+1]);
                strcpy(name[j+1], temp);
            }
        }
    }
    cout << "The strings appears after sorting : "<< endl;

    for(i=0; i<=n;i++)
    {
        cout << name[i] <<" ";
    }
    return 0;
}