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

    while(test--)
    {
        cin >> x;

        ll dg[64] = {0};

        int p;

        lop(x)
        {
            cin >> p;

            int m = 0;

            while(p)
            {
                p /= 2;
                m++;
            }

            dg[m]++;
        }

        ll ans = 0;

        lop(64)
        {
            ans += ((dg[i] * (dg[i] - 1)) / 2);
        }

        cout << ans << '\n';
    }

    return 0;
}

