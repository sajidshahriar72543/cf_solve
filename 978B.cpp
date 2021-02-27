#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, i, x = 0, y = 0;
    string s;

    cin >> n >> s;

    for(i = 0; i < n; i++)
    {
        if(s[i] == 'x') {
            y++;
            if(y > 2)
                x++;
        }
        else
            y = 0;
    }

    cout << x << endl;

    return 0;
}
