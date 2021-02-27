#include<bits/stdc++.h>

#define ll long long
#define pb push_back

using namespace std;

int main()
{
    ll test, x, y, a, b, aa, bb, cc;

    cin >> test;

    while(test--)
    {
        cin >> x >> y >> a >> b;

        if(x == 0 && y == 0) {
            cout << 0 << '\n';
            continue;
        }

        ll p = max(x, y);
        ll q = min(x, y);

        aa = (q * b) + ((p - q) * a);
        bb = (a * x) + (a * y);
        //cc = (b * x)

        cout << min(aa, bb) << '\n';
    }

    return 0;
}


