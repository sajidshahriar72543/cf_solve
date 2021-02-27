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

    ll n;

    cin >> n;

    ll a[n];

    lop(0, n) cin >> a[i];

    if(n == 1)
    {
        cout << 1 << ' ' << 1 << '\n' << -a[0] << '\n';
        cout << 1 << ' ' << 1 << '\n' << -a[0] << '\n';
        cout << 1 << ' ' << 1 << '\n' << a[0] << '\n';

        return 0;;
    }

    cout << 1 << ' ' << 1 << '\n' << -a[0] << '\n';
    a[0] = 0;

    cout << 2 << ' ' << n << '\n';
    lop(1, n)
    {
        ll x = a[i] % n;
        a[i] += (n - 1) * x;

        cout << (n - 1) * x << ' ';
    }

    cout << '\n';

    cout << 1 << ' ' << n << '\n';
    lop(0, n) cout << -a[i] << ' ';

    return 0;
}

