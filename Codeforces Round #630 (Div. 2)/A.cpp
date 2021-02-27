#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    ll t, a, b, c, d, x1, x2, y1, y2, x, y, u, v, f1, f2;

    cin >> t;

    while(t--)
    {
        cin >> a >> b >> c >> d;
        cin >> x >> y >> x1 >> y1 >> x2 >> y2;

        f1 = 0;
        f2 = 0;

        if(a > b)
        {
            u = a - b;
            if(x - u >= x1)
                f1 = 1;
        }
        else if(b > a)
        {
            u = b - a;
            if(x + u <= x2)
                f1 = 1;
        }
        else
        {
            if(a == 0 && b == 0)
                f1 = 1;
            else if (a != 0 && x1 < x)
                f1 = 1;
            else if(b != 0 && x < x2)
                f1 = 1;
        }

        if(c > d)
        {
            u = c - d;
            if(y - u >= y1)
                f2 = 1;
        }
        else if(d > c)
        {
            u = d - c;
            if(y + u <= y2)
                f2 = 1;
        }
        else
        {
            if(c == 0 && d == 0)
                f2 = 1;
            else if (c != 0 && y1 < y)
                f2 = 1;
            else if(d != 0 && y < y2)
                f2 = 1;
        }

        if(f1 == 0 || f2 == 0)
            cout << "NO\n";
        else
            cout << "YES\n";
    }

    return 0;
}
