#include<bits/stdc++.h>

#define ll long long

using namespace std;

int main()
{
    ll tt, n, i, j, k;
    vector <ll> v;

    cin >> tt;

    while(tt--)
    {
        cin >> n >> k;

        if((n % 2 == 1 and k % 2 == 0) || k > n) {
            cout << "NO\n";
            continue;
        }

        if(n % k == 0) {
            cout << "YES\n";
            j = n / k;
            for(i = 0; i < k; i++)
                cout << j << " ";
            cout << "\n";
            continue;
        }

        if(n % 2 == 0 and k * 2 <= n) {
            if(k % 2 == 1 and k * 2 > n) {
                cout << "NO\n";
                continue;
            }
            ll sum = 0;
            cout << "YES\n";
            for(i = 0; i < k - 1; i++) {
                cout << 2 << " ";
                sum += 2;
            }
            cout << n - sum << "\n";
        }
        else {
            if(n % 2 == 0 and k % 2 == 1 and k * 2 > n) {
                cout << "NO\n";
                continue;
            }
            ll sum = 0;
            cout << "YES\n";
            for(i = 0; i < k - 1; i++) {
                cout << 1 << " ";
                sum += 1;
            }
            cout << n - sum << "\n";
        }
    }

    return 0;
}
