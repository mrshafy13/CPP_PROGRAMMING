#include <bits/stdc++.h>

using namespace std;

int main()
{
    string keyboard ="qwertyuiopasdfghjkl;zxcvbnm,./";
    int keyboard_length = keyboard.size();

    string input;
    char shifting[1];
    cin >> shifting;
    
    cin>> input;

    int input_length = input.size();

    if(shifting[0] == 'L')
    {
        for(int i = 0; i< input_length;i++)
        {
            for(int j = 0; j < keyboard_length; j++)
            {
                if(input[i]==keyboard[j])
                {
                    cout << keyboard[j+1];
                    break;
                }
            }
        }
    }
    if(shifting[0] == 'R')
    {
        for(int i = 0; i<input_length;i++)
        {
            for(int j = 0; j < keyboard_length; j++)
            {
                if(input[i]==keyboard[j])
                {
                    cout << keyboard[j-1];
                    break;
                }
            }
        }
    }
    cout << endl;

    return 0;
}