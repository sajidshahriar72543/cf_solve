#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, h, i, w = 0, x;

    cin >> n >> h;

    for(i = 0; i < n; i++)
    {
        cin >> x;

        w += x > h ? 2 : 1;
    }

    cout << w << endl;

    return 0;
}
