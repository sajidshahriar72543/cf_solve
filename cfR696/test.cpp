#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define lop(b) for(int i = 0; i < b; i++)
#define loop(j, a, b) for(int j = a; j < b; j++)
#define yes cout << "yes\n"
#define no cout << "no\n"

const int d = 10000;

void solve();

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    //freopen("input.txt", "r", stdin)

    int test = 1;

    // cin >> test;

    while (test--)
    {
        solve();
    }

    return 0;
}

void solve()
{
    vector <int> dv;
    lop(100000000)
    {
        for (ll j = 1; j * j < i; j++)
        {
            if (i % j == 0)
            {
                dv.push_back(j);
                if (j * j != i)
                    dv.push_back(i / j);
            }
        }

        if (dv.size() >= 4)
        {
            int f = 1;
            sort(dv.begin(), dv.end());
            for (int j = 0; j < dv.size() - 1; j++)
            {
                if (dv[j + 1] - dv[j] < d)
                {
                    f = 0;
                    break;
                }
            }

            if (f) cout << i << '\n';
        }
        dv.clear();
    }

    return;
}