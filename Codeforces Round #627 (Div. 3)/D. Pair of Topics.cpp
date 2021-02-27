#include<bits/stdc++.h>

using namespace std;

#define int long long

int32_t main()
{
    int n;
    cin >> n;
    int a[n], b[n], c[n];

    for (int i = 0; i < n; i++)
        cin >> a[i];

    for (int i = 0; i < n; i++) {
        cin >> b[i];
        c[i] = a[i] - b[i];
    }

    sort(c, c + n);
    int ans = 0;

    for (int i = 0; i < n; i++) {
        if (c[i] <= 0)
            continue;

        int t = lower_bound(c, c + n, -c[i] + 1) - c;
        ans += i - t;
    }

    cout << ans << '\n';

    return 0;
}
