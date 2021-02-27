#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define lop(b) for(int i = 0; i < b; i++)
#define loop(j, a, b) for(int j = a; j < b; j++)
#define yes cout << "yes\n"
#define no cout << "no\n"

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
        cin >> x;
        int a[x], cnt[x + 2] = {0};

        lop(x) cin >> a[i], cnt[a[i]]++;

        int p = 1 << 30, ans = -1;
        lop(x)
        {
            if (cnt[a[i]] == 1)
            {
                if (a[i] < p)
                    ans = i + 1, p = a[i];
            }
        }

        cout << ans << '\n';
    }

    return 0;
}
