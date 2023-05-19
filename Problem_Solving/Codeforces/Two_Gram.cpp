/*Bismillahir Rahmanir Raheem*/
/*After Watching the solution from Code's Pathshala*/
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int length;
    cin >> length;
    string input;

    cin >> input;
    

    int count = 0, result = 0;
    
    int temp;
    for(int i = 0; i < length-1; i++)
    {
        count = 0;
        for( int j = 0; j < length - 1; j++)
        {
            if(input[i]==input[j] && input[i+1]==input[j+1])
            {
                count++;
                if(result<count)
                {
                    result = count;
                    temp = i;
                }
            }
        }
        
    }
    cout << input [temp] << input[temp+1] << endl; 
    return 0;
}