#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define lop(b) for(int i = 0; i < b; i++)
#define loop(j, a, b) for(int j = a; j < b; j++)
#define yes cout << "yes\n"
#define no cout << "no\n"

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    //freopen("input.txt", "r", stdin)

    int n;
    cin >> n;

    int a[n];
    unordered_map <int, int> cnt;

    lop(n) cin >> a[i], cnt[a[i]]++;

    sort(a, a + n);

    ll ans = 0;

    if (a[0] == a[1] and a[1] == a[2])
    {
        ll x = cnt[a[0]];
        ans = (x * (x - 1) * (x - 2)) / 6;
    }

    else if (a[1] == a[2])
    {
        ll x = cnt[a[1]];
        ans = (x * (x - 1)) / 2;
    }

    else
        ans = cnt[a[2]];

    cout << ans << '\n';

    return 0;
}