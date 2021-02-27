#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define lop(b) for(int i = 0; i < b; i++)
#define loop(j, a, b) for(int j = a; j < b; j++)
#define yes cout << "yes\n"
#define no cout << "no\n"

int dr[] = {1, -1, 0, 0};
int dc[] = {0, 0, 1, -1};

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
        int n, m;
        cin >> n >> m;

        int a[n][m];

        lop(n) loop(j, 0, m) cin >> a[i][j];

        int sum, neg, z, minp, maxn;
        sum = neg = z = 0;
        minp = 1LL << 28, maxn = -minp;
        lop(n) loop(j, 0, m)
        {
            if (a[i][j] > 0) sum += a[i][j], minp = min(minp, a[i][j]);
            else if (a[i][j] < 0) sum += -a[i][j], neg++, maxn = max(maxn, a[i][j]);
            else z++;
        }

        if (!z and (neg & 1)) sum -= 2 * min(minp, -maxn);

        cout << sum << '\n';
    }

    return 0;
}
