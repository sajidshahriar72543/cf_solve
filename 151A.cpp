#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long n, k, l, c, d, p, nl, np;

    cin >> n >> k >> l >> c >> d >> p >> nl >> np;

    cout << min(((l * k) / nl), min(c * d, p / np)) / n << endl;

    return 0;
}

