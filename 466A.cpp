#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define lop(a, b) for(int i = a; i <= b; i++)
#define lopj(a, b) for(int j = a; j <= b; j++)

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    //freopen("input.txt", "r", stdin)

    ll n, ans = 99999999, m, a, b;

    cin >> n >> m >> a >> b;

//    ll x = n / m, y = (n - (m * x));
//
//    ans = (x * b) + (y * a);
//
//    if(n > m) {
//        ans = b;
//    }

    ll xx = (n + m - 1) / m;

    lop(0 , xx + 1)
    {
        ll x = ((n - (i * m)) * a) + (i * b);

        if(m * i > n)
            x = i * b;

        ans = min(ans, x);
    }


    cout << ans << endl;

    return 0;
}


