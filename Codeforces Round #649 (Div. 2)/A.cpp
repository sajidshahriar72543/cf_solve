#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define lop(a, b) for(int i = a; i < b; i++)
#define lopj(a, b) for(int j = a; j < b; j++)

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    //freopen("input.txt", "r", stdin)

    ll x, test, n;

    cin >> test;

    while(test--)
    {
        cin >> n >> x;

        ll a[n + 1], b[n + 1], res = -1, ans = -1;

        a[0] = b[0] = 0;

        lop(1, n + 1) {
            cin >> a[i];
            b[i] = a[i] + b[i - 1];
            //cout << b[i] << ' ';
        }

        if(x == 0) {
            cout << n << '\n';
            continue;
        }

        for(ll i = n, j = 1; i > 0; i--, j++)
        {
            if(b[i] % x != 0) {
                res = max(i, res);
                //cout << b[i] << " " << res << "\n";
            }

            if((b[n] - b[j]) % x != 0) {
                ans = max(ans, n - j);
                //cout << "ans " << (b[n] - b[j]) << " " << ans << '\n';
            }

        }

        ans = ans == 0 ? -1 : ans;
        res = res == 0 ? -1 : res;

        cout << max(res, ans) << '\n';
    }

    return 0;
}

