#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define lop(a, b) for(int i = a; i < b; i++)
#define lopj(a, b) for(int j = a; j < b; j++)
#define yes cout << "yes\n"
#define no cout << "no\n"

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    //freopen("input.txt", "r", stdin)

    ll n, x, test, tmp, div, ans;
    map <ll, ll> mod;

    cin >> test;

    while(test--)
    {
        cin >> n >> x;

        ll a[n];

        lop(0, n) cin >> a[i];

        //sort(a, a + n);

        ans = 0;
        lop(0, n)
        {
            tmp = x - (a[i] % x);
            if(tmp == x) tmp = 0;

            if(tmp)
            {
                div = tmp + (x * mod[tmp]);
                mod[tmp]++;
                ans = max(ans, div);
            }
        }

        if(ans != 0) ans++;

        cout << ans << '\n';

        mod.clear();
    }

    return 0;
}
