#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define lop(a, b) for(int i = a; i < b; i++)
#define lopj(a, b) for(int j = a; j < b; j++)

int main()
{
    ll n, m;

    cin >> n;

    ll a[n], b[n];

    lop(0, n) cin >> a[i];

    m = b[0] = a[0];

    lop(1, n)
    {
        m = max(m, b[i - 1]);
        b[i] = m + a[i];
    }

    lop(0, n) cout << b[i] << " ";

    return 0;
}
