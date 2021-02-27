#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define lop(b) for(int i = 0; i < b; i++)
#define loop(j, a, b) for(int j = a; j < b; j++)
#define yes cout << "yes\n"
#define no cout << "no\n"

const ll inf = 1LL << 30;
map <ll, bool> f;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;

    ll a[n], s[n + 1]; s[0] = 0;

    lop(n) cin >> a[i + 1];

    int ans = 0;
    f[0] = 1;

    loop(i, 1, n + 1)
    {
        ll tmp = s[i - 1] + a[i];

        if (f[tmp])
        {
            s[i - 1] += inf;
            ans++;
            f[s[i - 1]] = 1;
        }

        s[i] = s[i - 1] + a[i];
        f[s[i]] = 1;
    }

    cout << ans << '\n';

    return 0;
}
