#include<bits/stdc++.h>

#define ll long long

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll tt, n, m, k;

    cin >> tt;

    while(tt--)
    {
        cin >> n >> m >> k;

        ll p = n / k;

        if(m == 0) {
            cout << 0 << '\n';
            continue;
        }

        if(p >= m) {
            cout << m << '\n';
            continue;
        }

        int jok[k] = {0};

        jok[0] = p;
        m -= p;

        int i = 1;
        while(m)
        {
            jok[i]++;
            m--;
            i++;
            if(i == k) i = 1;
            //cout << i << " " << jok[i] << '\n';
        }

        cout << jok[0] - jok[1] << '\n';
    }

    return 0;
}
