#include <bits/stdc++.h>

using namespace std;

int main()
{
    int Layers;
    cin >> Layers;
    for(int i = 1; i <= Layers; i++)
    {
        cout << "I";
        if(i%2!=0)
        {
            cout << " hate";
            if(i==Layers)
            {
                cout << " it";
            }
            else
            {
                cout << " that";
            }
        }
        else
        {
            cout << " love";
            if(i==Layers)
            {
                cout << " it";
            }
            else
            {
                cout << " that";
            }
        }
        cout << " ";
    }
    return 0;
}