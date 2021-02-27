#include<bits/stdc++.h>

#define ll long long
#define lop(n) for(int i = 0; i < n; i++)
#define lop1(n) for(int i = 1; i <= n; i++)
#define lopj(n) for(int j = 0; j < n; j++)
#define pb push_back
#define all(x) x.begin(), x.end()

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll tt, n, a, b, c, d;

    cin >> tt;

    while(tt--)
    {
        cin >> a >> b >> c >> d;

        if(a <= b) {
            cout << b << '\n';
            continue;
        }

        if(d >= c) {
            cout << -1 << '\n';
            continue;
        }

        n = ceil((a - b) / ((c - d) * 1.0));

        cout << (n * c) + b << '\n';
    }



    return 0;
}

