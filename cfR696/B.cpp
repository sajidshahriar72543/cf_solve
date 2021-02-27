#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define lop(b) for(int i = 0; i < b; i++)
#define loop(j, a, b) for(int j = a; j < b; j++)
#define yes cout << "yes\n"
#define no cout << "no\n"

const int N = 1e7;

bool mark[N + 1];
vector <ll> prime;

void sieve()
{
    ll i, j, limit = sqrt(N * 1.0);

    mark[0] = mark[1] = true;

    for (i = 4; i <= N; i += 2)
        mark[i] = true;

    for (i = 3; i <= limit; i += 2)
    {
        if (!mark[i])
        {

            for (j = i * i; j <= N; j += i * 2)
                mark[j] = true;
        }
    }

    for (int i = 2; i < N; i++)
        if (!mark[i]) prime.push_back(i);
}

void solve();

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    //freopen("input.txt", "r", stdin)

    sieve();

    int test = 1;

    cin >> test;

    while (test--)
    {
        solve();
    }

    return 0;
}

void solve()
{
    ll d;
    cin >> d;

    int i = lower_bound(prime.begin(), prime.end(), 1 + d) - prime.begin();
    ll x = prime[i];
    i = lower_bound(prime.begin(), prime.end(), x + d) - prime.begin();
    ll  y = prime[i];

    cout << x * y << '\n';

    return;
}