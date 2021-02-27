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
    int n;
    cin >> n;
    int a[n];
    lop(n) cin >> a[i];

    int o = 0, t = 0;
    lop(n)
    {
        o += a[i] == 1;
        t += a[i] == 2;
    }

    int x = ((t * 2) + o + 1) / 2, p = 0;

    while (t)
    {
        if (p + 2 > x) break;
        p += 2;
        t--;
    }

    while (o)
    {
        if (p + 1 > x) break;
        p++;
        o--;
    }

    if (p != x or (t * 2) + o != x)
        no;
    else
        yes;

    return;
}