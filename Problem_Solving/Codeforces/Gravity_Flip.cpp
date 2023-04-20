#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int boxes[n];
    for(int i = 0; i < n; i++)
    {
        cin >> boxes[i];
    }
    sort(boxes, boxes+n);
    for(int i = 0; i < n; i++)
    {
        cout << boxes[i] << " ";
    }
    cout << endl;
    return 0;
}