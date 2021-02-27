#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define lop(b) for(int i = 0; i < b; i++)
#define loop(j, a, b) for(int j = a; j < b; j++)
#define yes cout << "yes\n"
#define no cout << "no\n"

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int x, test;

    cin >> test;

    while (test--)
    {
        int n, m;
        cin >> n >> m;

        ll a[n + 1][m + 1];
        memset(a, 0, sizeof a);

        loop(i, 1, n + 1) loop(j, 1, m + 1) cin >> a[i][j];

        loop(i, 1, n + 1)
        {
            loop(j, 1, m + 1)
            {
                a[i][j] += (a[i][j] % 2 == (i + j) % 2);
                /*if (a[i][j] != a[i - 1][j] and a[i][j] != a[i][j - 1])
                    continue;

                a[i][j]++;

                if (a[i][j] == a[i - 1][j])
                {
                    a[i][j]--;
                    a[i][j - 1]++;
                }
                if (a[i][j] == a[i][j - 1])
                {
                    a[i][j]--;
                    a[i - 1][j]++;
                }*/
            }
        }

        loop(i, 1, n + 1)
        {
            loop(j, 1, m + 1)
            cout << a[i][j] << ' ';
            cout << '\n';
        }
    }

    return 0;
}
