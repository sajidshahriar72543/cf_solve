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
    ll n, k;
    cin >> n >> k;

    ll a[n + 2];
    lop(n) cin >> a[i + 1];
    a[0] = a[n + 1] = 0;

    int p = 1;
    while (k > 0 and p < n)
    {
        loop(i, 1, n + 1)
        {
            p = i;
            if (a[i] < a[i + 1])
            {
                // int x = a[i + 1] - a[i];
                // a[i] += x;
                // k -= x - 1;
                a[i]++;
                break;
            }
        }
        // cout << k << ' ' << p << '\n';
        k--;
    }
    // for (; p < n and k > 0; p++, k--)
    // {
    //     if (a[p] < a[p + 1])
    //     {
    //         int x = a[p + 1] - a[p];
    //         if (x <= k)
    //             k -= x;
    //         else
    //             break;
    //     }
    //     cout << p << ' ' << k << '\n';
    // }

    if (p == n)
        p = -1;

    cout << p << '\n';

    return;
}