#include <bits/stdc++.h>

using namespace std;

int	main()
{
    string instruction;
    cin >> instruction;
    int length = instruction.size();
    for(int i = 0; i<length;i++)
    {
        if(instruction[i]=='H'||instruction[i]=='Q'||instruction[i]=='9')
        {
            cout << "YES" << endl;
            return 0;
        }
        else if(instruction[i]=='+')
        {
            instruction[i]++;
        }
    }
    cout << "NO" << endl;
    return 0;
}
