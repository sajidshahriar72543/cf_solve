#include<bits/stdc++.h>

#define ll long long

using namespace std;

ll spdiv(ll n, ll x)
{
    ll i, cnt = 0;

    for(i = 1; i * i <= x && i <= n; i++) {
        if(x % i == 0)
        {
            if(i * i == x && i <= n)
                cnt++;
            else if(i <= n && x / i <= n)
                cnt += 2;
        }
    }

    return cnt;
}

int main()
{
    ll n, x;

    cin >> n >> x;

    cout << spdiv(n, x) << endl;

    return 0;
}
