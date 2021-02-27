#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define lop(b) for(int i = 0; i < b; i++)
#define loop(j, a, b) for(int j = a; j < b; j++)
#define yes cout << "yes\n"
#define no cout << "no\n"

void solve();

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

void solve()
{
    ll n, x;
    cin >> n >> x;

    ll a;

    ll mn = 0, mx = 0;
    lop(n)
    {
        cin >> a;
        mn += a;
        mx += ceil((double) a / x);
    }

    mn = ceil((double) mn / x);

    cout << mn << ' ' << mx << '\n';

    return;
}