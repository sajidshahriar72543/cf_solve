#pragma GCC optimize("Ofast,unroll-loops")
#pragma GCC target("avx,avx2,fma")

#include<bits/stdc++.h>

#define ll long long
#define pb push_back

using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll t, n, k, i, evsum, j;

    cin >> t;

    while(t--)
    {
        cin >> n;

        k = n / 2;

        if(k % 2 == 1) {
            cout << "NO\n";
            continue;
        }

        evsum = k * (1 + k);
        ll odsum = 0;

        cout << "YES\n";

        for(i = 0, j = 2; i < k; i++, j += 2)
            cout << j << " ";

        for(i = 0, j = 1; i < k - 1; i++, j+= 2) {
            cout << j << " ";
            odsum += j;
        }

        cout << evsum - odsum << "\n";
    }

    return 0;
}

