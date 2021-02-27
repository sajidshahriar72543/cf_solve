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
    int x, y;
    string s;
    cin >> x >> y >> s;

    int l, r, u, d;
    l = r = u = d = 0;
    if (x > 0)
        r = x;
    else
        l = -x;
    if (y > 0)
        u = y;
    else
        d = -y;

    int lll, rr, uu, dd;
    lll = rr = uu = dd = 0;

    lop(s.size())
    {
        lll += s[i] == 'L';
        rr += s[i] == 'R';
        uu += s[i] == 'U';
        dd += s[i] == 'D';
    }

    if (lll >= l and rr >= r and uu >= u and dd >= d)
        yes;
    else
        no;

    return;
}