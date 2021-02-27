#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define lop(b) for(int i = 0; i < b; i++)
#define loop(j, a, b) for(int j = a; j < b; j++)
#define yes cout << "yes\n"
#define no cout << "no\n"

const ll inf = 1LL << 45;

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
    ll n, k;
    cin >> n >> k;

    pair <ll, ll> pt[n];
    lop(n) cin >> pt[i].first >> pt[i].second;

    lop(n)
    {
        bool f = 1;
        loop(j, 0, n)
        {
            ll d = abs(pt[i].first - pt[j].first) + abs(pt[i].second - pt[j].second);

            if (d > k)
            {
                f = 0;
                break;
            }
        }

        if (f)
        {
            cout << 1 << '\n';
            return;
        }
    }

    cout << -1 << '\n';
}