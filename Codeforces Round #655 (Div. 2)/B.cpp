#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define lop(a, b) for(int i = a; i < b; i++)
#define lopj(a, b) for(int j = a; j < b; j++)
#define yes cout << "yes\n"
#define no cout << "no\n"

int main()
{
//    ios_base::sync_with_stdio(0);
//    cin.tie(0);
//    cout.tie(0);

    //freopen("input.txt", "r", stdin)

    ll x, test, n, k;
    vector <ll> div;

    cin >> test;

    while(test--)
    {
        cin >> n;

        if(n % 2 == 0)
            cout << n / 2 << " " << n / 2 << '\n';

        else
        {
            ll ans = 1;

            lop(1, sqrt(n) + 2)
            {
                if(n % i == 0)
                {
                    div.push_back(i);
                    if(n / i != i)
                        div.push_back(n / i);
                }
            }

            ll mx = 99999999999999999, xx = div.size();

            lop(0, xx)
            {
                ll a = div[i], b = n - a;

                if(a == n) continue;

                ll lc = __gcd(a, b);
                lc = (a * b) / lc;
                //cout << lc << '\n';
                if(lc < mx) {
                    ans = a;
                    mx = lc;
                }
            }

            cout << ans << " " << n - ans << '\n';
            div.clear();
        }
    }

    return 0;
}


