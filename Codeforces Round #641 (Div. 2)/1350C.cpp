#include<bits/stdc++.h>

#define ll long long

using namespace std;

const int N = 2e5 + 6;

int faccnt[N][20];

void factorise(int n)
{
    int p = n;
    // cout << n << '\n';
    for (int i = 2; i * i <= p; i++)
    {
        if (n % i == 0)
        {
            int c = 0;
            while (n % i == 0)
                n /= i, c++;
            // cout << i << ' ' << c << ' ' << n << '\n';
            faccnt[i][c]++;
        }
    }

    if (n != 1) faccnt[n][1]++;
}

int main()
{
    int n;

    scanf("%d", &n);

    vector <ll> a(n);
    for (auto &z : a) cin >> z;

    if (n == 1) {
        cout << a[0] << '\n';
        return 0;
    }
    if (n == 2)
    {
        cout << lcm(a[0], a[1]) << '\n';
        return 0;
    }

    // a.resize(distance(a.begin(), unique(a.begin(), a.end())));

    // n = a.size();
    for (auto &z : a) factorise(z);


    ll ans = 1LL;

    // for (int i = 2; i < 6; i++)
    // {
    //     cout << i << '\n';
    //     for (int j = 1; j < 20; j++)
    //     {
    //         if (faccnt[i][j])
    //             cout << j << ' ' << faccnt[i][j] << '\n';
    //     }
    // }

    for (ll i = 2; i < N; i++)
    {
        int c = 0;
        for (int j = 1; j < 20; j++)
        {
            c += faccnt[i][j];
        }

        if (c <= n - 2) continue;

        for (int j = 1; j < 20; j++)
        {
            // int p = 0, q = 0;
            // for (int k = 1; k < j; k++)
            // {
            //     if (faccnt[i][k]) q++;

            //     if (faccnt[i][k] <= 1)
            //         p++;
            // }

            // if (p == q)
            // {
            //     c = j;
            //     break;
            // }
            if (faccnt[i][j] >= 2)
            {
                c = j;
                // cout << i << ' ' <<  j << ' ' << faccnt[i][j] << '\n';
                break;
            }
            // cout << i << ' ' <<  j << ' ' << faccnt[i][j] << '\n';
        }

        while (c--)
        {
            ans *= i;

            // cout << i << ' ' << c << ' ' << ans << '\n';
        }

    }

    printf("%d\n", ans);

    return 0;
}
