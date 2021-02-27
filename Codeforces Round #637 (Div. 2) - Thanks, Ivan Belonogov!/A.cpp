#include<bits/stdc++.h>

#define ll long long
#define pb push_back

using namespace std;

int main()
{
    ll t, p, a, b, c, d, x, y, m, n;

    cin >> t;

    while(t--)
    {
        cin >> n >> a >> b >> c >> d;

        x = a- b;
        y = a + b;
        m = c - d;
        p = c + d;

        if(n * y < m || n * x > p)
            cout << "NO\n";
        else
            cout << "YES\n";
    }

    return 0;
}

