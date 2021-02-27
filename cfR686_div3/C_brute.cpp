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
        int ans = 1 << 30;

        for (int i = 0; i < x; i++)
        {
            int c = 0, f = 0;
            for (int j = 0; j < x; j++)
            {
                if (a[i] == a[j]) f = 0;
                else if (!f) c++, f = 1;
            }

            ans = min(ans, c);
        }

        cout << ans << '\n';
    }

    return 0;
}
