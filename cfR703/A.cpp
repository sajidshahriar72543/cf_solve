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
    int n;
    cin >> n;
    ll a[n];
    lop(n) cin >> a[i];

    ll s = a[0];
    a[0] = 0;

    loop(i, 1, n)
    {
        if (a[i] < i)
        {
            ll x = min(i - a[i], s);
            a[i] += x;
            s -= x;
        }
        else if (a[i] > i)
        {
            s += a[i] - i;
            a[i] = i;
        }
    }
    a[n - 1] += s;

    lop(n - 1)
    {
        if (a[i] >= a[i + 1])
        {
            no;
            return;
        }
    }
    yes;
}