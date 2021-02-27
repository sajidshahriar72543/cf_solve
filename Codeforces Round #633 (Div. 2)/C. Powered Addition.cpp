#include<bits/stdc++.h>

#define ll long long

using namespace std;

int main()
{
    ll t, n, i, inp;
    vector <ll> v, vv;

    scanf("%lld", &t);

    while(t--)
    {
        scanf("%lld", &n);

        for(i = 0; i < n; i++) {
            scanf("%lld", &inp);
            v.push_back(inp);
        }

        vv = v;
        sort(vv.begin(), vv.end());
        if(vv == v) {
            cout << 0 << endl;
            v.clear();vv.clear();
            continue;
        }

        ll t = 0, maxd = vv[n - 1] - vv[0];

        ll x = 0;

        while(x < maxd)
        {
            x += (1 << t);
            t++;
        }

        printf("%lld\n", t);
        v.clear(); vv.clear();

    }

    return 0;
}

