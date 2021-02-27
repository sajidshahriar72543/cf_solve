#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define lop(a, b) for(int i = a; i < b; i++)
#define lopj(a, b) for(int j = a; j < b; j++)
#define yes cout << "yes\n"
#define no cout << "no\n"

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    //freopen("input.txt", "r", stdin)

    ll a, b, x, y, n, test;

    cin >> test;

    while(test--)
    {
        cin >> a >> b >> x >> y >> n;

        ll p = a, q = b, res, m = n;

        a -= min(a - x, n);
        b -= min(b - y, n);

        res = min(a * q, b * p);
        //cout << a << ' ' << b << ' ' << res << '\t';

        a = p, b = q, n = m;

        a -= min(a - x, n);
        n -= min(p - x, n);
        b -= min(b - y, n);

        res = min(res, a * b);
        //cout << a << ' ' << b << ' ' << res << '\t';

        a = p, b = q, n = m;

        b -= min(b - y, n);
        n -= min(q - y, n);
        a -= min(a - x, n);

        res = min(res, a * b);

        cout << res << '\n';
    }

    return 0;
}

