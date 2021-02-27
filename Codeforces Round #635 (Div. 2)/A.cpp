#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long a, b, c, d, x, y, z, t;

    cin >> t;

    while(t--)
    {
        x = y = z = 0;

        cin >> a >> b >> c >> d;

        x = b;
        y = c;

//        if(d > c)
//            z = c + 1;
//        else
//            z = d;

        cout << x << " " << y << " " << c << endl;
    }

    return 0;
}
