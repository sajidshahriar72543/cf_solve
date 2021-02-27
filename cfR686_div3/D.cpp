#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define lop(b) for(int i = 0; i < b; i++)
#define loop(j, a, b) for(ll j = a; j < b; j++)
#define yes cout << "yes\n"
#define no cout << "no\n"

const int N = 5e5 + 6;
vector <ll> prime;
bool mark[N + 1];

void sieve()
{
    mark[1] = 1;
    for (ll i = 4; i <= N; i += 2)
        mark[i] = 1;

    for (ll i = 3; i * i <= N; i += 2)
    {
        if (!mark[i])
        {
            for (ll j = i * i; j <= N; j += 2 * i)
                mark[j] = 1;
        }
    }

    loop(i, 1, N + 1)
    if (!mark[i])
        prime.push_back(i);
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    sieve();
    int test;

    cin >> test;

    while (test--)
    {
        ll n;
        cin >> n;

        pair <ll, ll> ans;
        ans.first = 0, ans.second = n;
        ll p = 2;
        for (ll i = 0; prime[i] * prime[i] <= n; i++)
        {
            ll z = prime[i];
            ll cnt = 0, x = n;

            while (1)
            {
                if (x % z) break;

                if ((x / z) % z == 0)
                {
                    cnt++;
                    x /= z;
                }
                else break;
            }

            if (cnt > ans.first)
                p = z, ans = {cnt, x};
        }

        ans.first++;
        cout << ans.first << '\n';
        lop(ans.first - 1) cout << p << ' ';
        cout << ans.second << '\n';
    }

    return 0;
}
