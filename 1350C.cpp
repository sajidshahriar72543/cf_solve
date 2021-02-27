#include<bits/stdc++.h>

#define ll long long

using namespace std;

const int N = 2e5 + 6;

int faccnt[N][20];

void factorise(int n)
{
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            int c = 0;
            while (n % i == 0)
                n /= i, c++;

            faccnt[i][c]++;
        }
    }

    if (n != 1) faccnt[n][1]++;
}

int main()
{
    int n;

    scanf("%d", &n);

    vector <int> a(n);
    for (auto &z : a) cin >> z;

    if (n == 1) {
        cout << a[0] << '\n';
        return 0;
    }

    //a.resize(distance(a.begin(), unique(a.begin(), a.end())));

    n = a.size();
    for (auto &z : a) factorise(z);


    int ans = 1;

    // for (int i = 2; i < 6; i++)
    // {
    //     cout << i << '\n';
    //     for (int j = 1; j < 20; j++)
    //     {
    //         if (faccnt[i][j])
    //             cout << j << ' ' << faccnt[i][j] << '\n';
    //     }
    // }

    for (int i = 2; i < N; i++)
    {
        int c = 0;
        for (int j = 1; j < 20; j++)
        {
            c += faccnt[i][j];
        }

        if (c < n - 2) continue;

        for (int j = 1; j < 20; j++)
        {
            if (faccnt[i][j] >= 2)
            {
                c = j;
                break;
            }

        }

        while (c--)
        {
            ans *= i;

            //cout << i << ' ' << c << ' ' << ans << '\n';
        }

    }

    // for(int i = 2; i * i <= ans; i++)
    // {
    //     if (ans % i == 0)
    //     {
    //         while (ans % i == 0)
    //             ans /= i;
    //     }
    // }

    printf("%d\n", ans);

    return 0;
}
