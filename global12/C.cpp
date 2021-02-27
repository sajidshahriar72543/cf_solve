#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define lop(b) for(int i = 0; i < b; i++)
#define loop(j, a, b) for(int j = a; j < b; j++)
#define yes cout << "yes\n"
#define no cout << "no\n"

void solve();

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    //freopen("input.txt", "r", stdin)

    int x, test;

    cin >> test;

    while (test--)
    {
        solve();
    }

    return 0;
}

void solve()
{
    int n;
    cin >> n;

    string grd[n];
    lop(n) cin >> grd[i];

    int clr[3] = {0};

    lop(n)
    {
        loop(j, 0, n)
        {
            if (grd[i][j] == 'X')
                clr[(i + j) % 3]++;
        }
    }

    int mn = min_element(clr, clr + 3) - clr;

    lop(n)
    {
        loop(j, 0, n)
        {
            if (grd[i][j] == 'X' and (i + j) % 3 == mn)
                grd[i][j] = 'O';
        }
    }

    lop(n) cout << grd[i] << '\n';
}