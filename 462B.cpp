#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define lop(b) for(int i = 0; i < b; i++)
#define loop(j, a, b) for(int j = a; j < b; j++)
#define yes cout << "yes\n"
#define no cout << "no\n"

int cnt[26];

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    //freopen("input.txt", "r", stdin)

    int n, k;
    char c;

    cin >> n >> k;

    lop(n) cin >> c, cnt[c - 'A']++;

    sort(cnt, cnt + 26, greater <int> ());

    ll ans = 0;

    lop(26)
    {
        ll x = min(cnt[i], k);
        k -= x;

        ans += x * x;

        if(!k) break;
    }

    cout << ans;

    return 0;
}

