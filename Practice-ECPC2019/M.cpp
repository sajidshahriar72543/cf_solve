#include<bits/stdc++.h>
using namespace std;

#define ll              long long
#define deb(x)          cout << #x << "=" << x << endl
#define deb2(x, y)      cout << #x << "=" << x << " , " << #y << "=" << y << endl

ll ar[100005];



void solve()
{
    ll n, m;

    string s;

    cin >> s;
    n = s.size();

    if (s.size() == 1)
    {
        cout << s << '\n';
        return;
    }

    ll ans = (n - 1) * 9;
    ans += (s[0] - '1');

    ll cnt = 0;

    for (int i = 1 ; i < n ; i++)
    {
        if (s[i] != '9')
        {
            printf("%lld\n", ans);
            return;
        }
    }

    printf("%lld\n", ans + 1);
}


int main()
{
    //freopen("lis.in", "r", stdin);

    int t = 1;

    scanf("%d", &t);

    while (t--)
    {
        solve();
    }

    return 0;
}