#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long kmax, kmin, x, y, p, m, n;

    cin >> n >> m;

    kmax = ((n - m) * (n - m + 1)) / 2;

    if(m * 2 >= n)
        kmin = n - m;

    else
    {
        x = n / m, y = n % m, p = m - y;

        kmin = (((x * (x + 1)) / 2) * y) + (((x * (x - 1)) / 2) * p);
    }

    cout << kmin << " " << kmax << '\n';

    return 0;
}
