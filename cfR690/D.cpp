#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define lop(b) for(int i = 0; i < b; i++)
#define loop(j, a, b) for(int j = a; j < b; j++)
#define yes cout << "yes\n"
#define no cout << "no\n"
#define deb(x) cout << #x << "=" << x << endl
#define deb2(x, y) cout << #x << "=" << x << " , " << #y << "=" << y << endl

const int N = 3e3 + 5;
ll a[N], n, c[N];

int check(ll x);
void solve();

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
        solve();
    }

    return 0;
}

void solve()
{
    cin >> n;

    c[0] = 0;
    lop(n)
    {
        cin >> a[i];
        c[i + 1] = c[i] + a[i];
    }

    int ans = 1 << 27;
    loop(i, 1, n + 1)
    {
        ans = min(ans, check(c[i]));
        ans = min(ans, check(c[n] - c[i - 1]));
    }

    cout << ans << '\n';
}

int check(ll x)
{
    ll p, i, j, y;
    p = i = j = y = 0;

    // deb(x);
    for (; i < n; i++)
    {
        y += a[i];
        // deb2(y, a[i]);

        if (y == x)
        {
            p += j;
            j = y = 0;
        }
        else
            j++;
    }

    // deb(p);
    return !y ? p : 1 << 28;
}