#include<bits/stdc++.h>

using namespace std;

#define close cout << -1; return 0;

int main()
{
    int t, sx, sy, ex, ey;
    string d;

    cin >> t >> sx >> sy >> ex >> ey >> d;

    int p, q;
    p = q = 0;

    if(sx < ex)
    {
        int x = abs(ex - sx);

        for(int i = 0; i < t and x; i++)
            if(d[i] == 'E')
                x--, p = i;

        if(x) {close}
    }

    else
    {
        int x = abs(sx - ex);

        for(int i = 0; i < t and x; i++)
            if(d[i] == 'W')
                x--, p = i;

        if(x) {close}
    }

    if(sy < ey)
    {
        int x = abs(ey - sy);

        for(int i = 0; i < t and x; i++)
            if(d[i] == 'N')
                x--, q = i;

        if(x) {close}
    }

    else
    {
        int x = abs(sy - ey);

        for(int i = 0; i < t and x; i++)
            if(d[i] == 'S')
                x--, q = i;

        if(x) {close}
    }

    cout << max(p, q) + 1 << '\n';

    return 0;
}
