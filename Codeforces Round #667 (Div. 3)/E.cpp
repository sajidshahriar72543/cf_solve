#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define lop(a, b) for(int i = a; i < b; i++)

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll test, n, k;

    cin >> test;

    while(test--)
    {
        cin >> n >> k;

        ll x[n], y;

        lop(0, n) cin >> x[i];
        lop(0, n) cin >> y;

        sort(x, x + n);

        ll caught[n + 1], max_caught[n + 1] = {0};

        int j = 0;
        lop(0, n)
        {
            for(; j < n and x[j] - x[i] <= k; j++);

            caught[i] = j - i;
        }

        for(int i = n - 1; i >= 0; i--)
            max_caught[i] = max(caught[i], max_caught[i + 1]);

        ll mx = 0, nxt;
        lop(0, n)
            nxt = i + caught[i], mx = max(mx, caught[i] + max_caught[nxt]);

        cout << mx << '\n';
    }

    return 0;
}
