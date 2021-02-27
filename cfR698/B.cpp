#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define lop(b) for(int i = 0; i < b; i++)
#define loop(j, a, b) for(int j = a; j < b; j++)
#define yes cout << "yes\n"
#define no cout << "no\n"

bool chk(ll x, ll d)
{
    while (x)
    {
        if (x % 10 == d)
            return 1;
        x /= 10;
    }

    return 0;
}

void solve();

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    //freopen("input.txt", "r", stdin)

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
    ll q, d;
    cin >> q >> d;

    while (q--)
    {
        ll x;
        cin >> x;

        bool f = 0;

        if (x >= 10 * d)
            f = 1;
        while (x >= d and !f)
        {
            if (chk(x, d))
                f = 1;//, cout << x << ' ';
            x -= d;
        }

        f ? yes : no;
    }
    return;
}