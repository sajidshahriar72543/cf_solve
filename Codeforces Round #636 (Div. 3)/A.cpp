#pragma GCC optimize("Ofast,unroll-loops")
#pragma GCC target("avx,avx2,fma")

#include<bits/stdc++.h>

#define ll long long
#define pb push_back

using namespace std;

ll power(ll a, ll b){
     if(b == 0)
        return 1;
     else if(b % 2)
        return a * power(a, b - 1);
     else {
        ll temp = power(a, b / 2);
        return temp * temp;
     }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll t, n, a, k, r, rn, an;

    cin >> t;

    while(t--)
    {
        cin >> n;

        for(k = 2; ; k++) {
            rn = power(2, k);

            a = ((-1 * n) / (1 - rn));
            an = ceil(((-1 * n) / ((1 - rn) * 1.0)));

            if(a == an)
                break;
        }

        cout << a << "\n";
    }

    return 0;
}
