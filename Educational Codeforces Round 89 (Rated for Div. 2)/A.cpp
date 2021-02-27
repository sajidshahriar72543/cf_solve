#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define lop(a, b) for(int i = a; i < b; i++)
#define lopj(a, b) for(int j = a; j < b; j++)

int main()
{
//    ios_base::sync_with_stdio(0);
//    cin.tie(0);
//    cout.tie(0);

    //freopen("input.txt", "r", stdin)

    ll x, test, a, b;

    cin >> test;

    while(test--)
    {
        cin >> a >> b;

        ll m = max(a, b), n = min(a, b);

        if(n == 0) {
            cout << 0 << endl;
            continue;
        }

        if(n * 2 <= m) {
            cout << n << endl;
            continue;
        }

        ll res = (m + n) / 3;
//        if(n > m / 2) {
//            res = (m + n) / 3;
//        }

//        ll res = m / 2;
//        m -= (res * 2);
//        n -= res;
//
//        if(m and n)
//            res++;

        cout << res << '\n';
    }

    return 0;
}

