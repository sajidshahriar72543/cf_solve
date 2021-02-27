#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define lop(b) for(int i = 0; i < b; i++)
#define loop(j, a, b) for(int j = a; j < b; j++)
#define yes cout << "yes\n"
#define no cout << "no\n"

const int N = 1e5 + 9;
ll eg[N], wt[N];
vector <ll> mlt;

void solve()
{
    int n;
    cin >> n;
    lop(n) cin >> wt[i + 1];

    lop(n + 2) eg[i] = 0;
    lop(n - 1)
    {
        int u, v;
        cin >> u >> v;
        eg[u]++;
        eg[v]++;
    }

    ll sum = 0;
    loop(i, 1, n + 1)
    {
        if (eg[i] > 1)
        {
            for (int p = 1; p < eg[i]; p++)
                mlt.push_back(wt[i]);
        }

        sum += wt[i];
    }

    sort(mlt.begin(), mlt.end(), greater <ll> ());

    int saiz = mlt.size();
    cout << sum << ' ';
    lop(saiz)
    {
        sum += mlt[i];
        cout << sum << ' ';
    }
    cout << '\n';

    mlt.clear();
}

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