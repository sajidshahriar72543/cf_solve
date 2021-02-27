#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define lop(b) for(int i = 0; i < b; i++)
#define loop(j, a, b) for(int j = a; j < b; j++)
#define yes cout << "yes\n"
#define no cout << "no\n"

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    //freopen("input.txt", "r", stdin)

    int x, test;

    cin >> test;

    while (test--)
    {
        cin >> x;

        ll a[x];
        lop(x) cin >> a[i];

        sort(a, a + x);
        ll df = 0;
        loop(i, 1, x) df += a[x - 1] - a[i];

        ll ans = 0;
        if(df > a[0])
            ans = df - a[0];
        else if(df < a[x - 1])
        {
            ll p = a[0] - df, q = x - 1;
            ll k = p % q;
            if(k)
                ans = q - k;
        }

        cout << ans << '\n';
    }

    return 0;
}

