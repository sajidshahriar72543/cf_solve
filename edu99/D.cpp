#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define lop(b) for(int i = 0; i < b; i++)
#define loop(j, a, b) for(int j = a; j < b; j++)
#define yes cout << "yes\n"
#define no cout << "no\n"

int solve();

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    //freopen("input.txt", "r", stdin)

    int test;

    cin >> test;

    while (test--)
    {
        cout << solve() << '\n';
    }

    return 0;
}

int solve()
{
    int n, x;
    cin >> n >> x;

    int a[n + 3];
    lop(n) cin >> a[i];

    int ans = 0;
    lop(n - 1)
    {
        if (a[i] > a[i + 1])
        {
            if (a[i] <= x)
                return -1;

            int k = i;
            for (; k >= 0; k--)
            {
                if (a[k] <= x)
                {
                    if (a[k + 1] > x)
                    {
                        k++;
                        break;
                    }
                }
            }
            if (k < 0) k++;

            loop(j, k, i + 1)
            {
                if (a[j] == x)
                    continue;

                swap(x, a[j]);
                ans++;
            }
        }
    }

    return is_sorted(a, a + n) ? ans : -1;
}