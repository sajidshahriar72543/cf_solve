#include<bits/stdc++.h>
using namespace std;

#define ll              long long
#define deb(x)          cout << #x << "=" << x << endl
#define deb2(x, y)      cout << #x << "=" << x << " , " << #y << "=" << y << endl
#define _               ios_base::sync_with_stdio(false);cin.tie(NULL);
#define inf             1<<30

void solve()
{
    int n, m;
    cin >> n;

    int ar[n], res = inf;

    for (int i = 0 ; i < n ; i++) cin >> ar[i];

    int val = 0;

    for (int i = 0 ; i < n ; i++)
    {
        val += ar[i];
        int  pos = i + 1, cnt = i;;
        bool ok = 1;

        while (pos < n)
        {
            if (ar[pos] != val)
            {
                int sum = ar[pos];
                pos++;

                while (sum < val && pos < n)
                {
                    sum += ar[pos];
                    pos++;
                    cnt++;
                }

                if (sum != val)
                {
                    ok = 0;
                    break;
                }
            }
            else pos++;
        }

        if (ok) res = min(res , cnt);
    }

    if (res == inf) res = n - 1;

    cout << res << '\n';
}


int main()
{   _
    int t = 1;

    cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}