#include<bits/stdc++.h>

using namespace std;
#define ll long long
#define N 2000009
#define mod 1000000007

#define lop(a, b) for(int i = a; i < b; i++)
#define lopj(a, b) for(int j = a; j < b; j++)

ll calc[N];

void precal(ll n)
{
    for(ll i = 5; i <= n; i++)
        calc[i] = ((2 * calc[i - 2]) + calc[i - 1] + ((i % 3 == 0) * 4)) % mod;
}


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    calc[3] = calc[4] = 4;

    precal(N - 2);

    ll test, n;

    cin >> test;

    while(test--)
    {
        cin >> n;

        cout << calc[n] % mod << '\n';
    }

    return 0;
}
