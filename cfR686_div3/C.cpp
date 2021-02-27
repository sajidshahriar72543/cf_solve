#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define lop(b) for(int i = 0; i < b; i++)
#define loop(j, a, b) for(int j = a; j < b; j++)
#define yes cout << "yes\n"
#define no cout << "no\n"

int main()
{
    // ios_base::sync_with_stdio(0);
    // cin.tie(0);
    // cout.tie(0);

    //freopen("input.txt", "r", stdin)

    int x, test;

    cin >> test;

    while (test--)
    {
        cin >> x;
        int a[x], cnt[x + 2] = {0};
        lop(x)
        {
            cin >> a[i];
            cnt[a[i]]++;
        }
        bool f = 1;
        lop(x - 1)
        {
            if (a[i] == a[i + 1])
                cnt[a[i]]--;
            else
                f = 0;
        }

        if (f)
        {
            cout << 0 << '\n';
            continue;
        }

        int ans;
        // if (a[0] == a[x - 1])
        //     ans = cnt[a[0]] - 1;
        // else
        // {
        ans = 1 << 30;
        cnt[a[0]]--;
        cnt[a[x - 1]]--;
        //}
        loop(i, 0, x)
        {
            ans = min(ans, cnt[a[i]] + 1);
        }

        ans = max(ans, 1);
        cout << ans << '\n';
    }

    return 0;
}
