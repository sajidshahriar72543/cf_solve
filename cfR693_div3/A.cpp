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
    ll w, h, n;

    cin >> w >> h >> n;

    ll p = 1;

    while (p < n and (!(w % 2) or !(h % 2)))
    {
        if (!(w % 2)) w /= 2;
        else if (!(h % 2)) h /= 2;

        p *= 2;
    }

    if (n > p) no;
    else yes;

    return;
}