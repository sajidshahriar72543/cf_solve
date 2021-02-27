#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define lop(b) for(int i = 0; i < b; i++)
#define loop(j, a, b) for(int j = a; j < b; j++)
#define yes cout << "yes\n"
#define no cout << "no\n"

const int N = 2e5 + 6;
ll a[N], n;

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
    lop(n) cin >> a[i];

    sort(a, a + n, greater <ll> ());

    ll ab[2] = {0}, f = 0;
    lop(n)
    {
        if (a[i] % 2 == f) ab[f] += a[i];

        f ^= 1;
    }

    if (ab[0] > ab[1]) cout << "Alice\n";
    else if (ab[0] < ab[1]) cout << "Bob\n";
    else cout << "Tie\n";

    return;
}