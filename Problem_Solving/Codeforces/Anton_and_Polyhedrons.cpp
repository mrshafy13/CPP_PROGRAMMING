#include <bits/stdc++.h>

using namespace std;

int main()
{
    string polyhedron_1 = "Tetrahedron", polyhedron_2 = "Cube", polyhedron_3 = "Octahedron", polyhedron_4 = "Dodecahedron", polyhedron_5 = "Icosahedron";
    int answer = 0;
    int n;
    cin >> n;
    for(int i = 0; i <= n; i++)
    {
        string str;
        getline(cin, str);
        if(str == polyhedron_1)
        {
            answer = answer+4;
        }
        else if(str == polyhedron_2)
        {
            answer = answer + 6;
        }
        else if(str == polyhedron_3)
        {
            answer = answer + 8;
        }
        else if(str == polyhedron_4)
        {
            answer = answer + 12;
        }
        else if(str == polyhedron_5)
        {
            answer = answer + 20;
        }
    }
    cout << answer << endl;
    return 0;
}