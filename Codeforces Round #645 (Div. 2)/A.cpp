#include<bits/stdc++.h>

#define ll long long
#define all(x) x.begin(), x.end()

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll tt, n, m, x, y, z;

    cin >> tt;

    while(tt--)
    {
        cin >> n >> m;

        x = (n / 2) * m;
        y = (n * m) - (x * 2);
        z = ceil(y / 2.0);


        cout << x + z << '\n';
    }

    return 0;
}

