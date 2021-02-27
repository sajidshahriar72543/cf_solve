#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define lop(a, b) for(int i = a; i < b; i++)
#define lopj(a, b) for(int j = a; j < b; j++)

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    //freopen("input.txt", "r", stdin)

    ll n, test, m, k;
    string s;

    cin >> test;

    while(test--)
    {
        cin >> n >> m >> k;

        if(n < m) swap(n, m);

        ll x = 0;

        while(n <= k) {
            ll sum = n + m;
            m = n;
            n = sum;
            x++;
        }

        cout << x << '\n';
    }

    return 0;
}

