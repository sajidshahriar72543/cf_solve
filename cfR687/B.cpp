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
        int n, k;
        cin >> n >> k;

        int a[n], c[n + 2] = {0}, color[102] = {0};
        lop(n) cin >> a[i];

        ll ans = 1e16;
        int lmt = *max_element(a, a + n);
        loop(j, 1, lmt + 2)
        {
            ll cnt = 0, p = k, f = 0;
            // cout << j << '\n';
            lop(n)
            {
                /*if (i >= p)
                    p += k, f = 0;

                if (a[i] != j and !f)
                {
                    cnt++, f = 1;
                    cout << i << ' ' << p << ' ' << cnt << endl;
                }*/
                if (a[i] != j)
                {
                    cnt++;
                    i += k - 1;
                }
            }
            //cout << j << ' ' << cnt << '\n';
            ans = min(ans, cnt);
        }

        cout << ans << '\n';
    }

    return 0;
}
