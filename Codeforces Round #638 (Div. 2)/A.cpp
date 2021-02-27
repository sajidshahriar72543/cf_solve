#include<bits/stdc++.h>

#define ll long long
#define pb push_back

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll tt, n, i, j;
    vector <ll> v1, v2;

    cin >> tt;

    while(tt--)
    {
        cin >> n;

        ll sum1 = 0, sum2 = 0;

        sum1 += (1 << n);

        for(i = 1; i < n / 2; i++) {
            sum1 += (1 << i);
        }

        //cout << "sum1 " << sum1 << endl;

        for(j = i; j < n; j++) {
            sum2 += (1 << j);
        }

        //cout << "sum2 " << sum2 << endl;

        cout << abs(sum1 - sum2)  << '\n';
    }

    return 0;
}
