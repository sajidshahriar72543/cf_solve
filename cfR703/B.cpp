#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define lop(b) for(int i = 0; i < b; i++)
#define loop(j, a, b) for(int j = a; j < b; j++)
#define yes cout << "yes\n"
#define no cout << "no\n"

void solve();

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    //freopen("input.txt", "r", stdin)

    int test = 1;

    cin >> test;

    while (test--)
    {
        solve();
    }

    return 0;
}

void solve()
{
    int n;
    cin >> n;
    ll a[n], b[n];
    lop(n) cin >> a[i] >> b[i];

    if (n & 1)
    {
        cout << 1 << '\n';
        return;
    }

    sort(a, a + n);
    sort(b, b + n);

    ll x = a[n / 2] - a[(n / 2) - 1] + 1;
    ll y = b[n / 2] - b[(n / 2) - 1] + 1;

    cout << x * y << '\n';
}