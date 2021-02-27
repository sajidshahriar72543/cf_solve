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
    ll p, a, b, c;
    cin >> p >> a >> b >> c;

    ll aa = ((p + a - 1) / a) * a;
    ll bb = ((p + b - 1) / b) * b;
    ll cc = ((p + c - 1) / c) * c;

    cout << min({aa - p, bb - p, cc - p}) << '\n';

    return;
}