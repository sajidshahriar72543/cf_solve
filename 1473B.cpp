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
    string a, b;
    cin >> a >> b;
    int n = a.size(), m = b.size();
    if (n < m)
    {
        swap(a, b);
        swap(n, m);
    }

    string t = a;
    while (n <= 400)
    {
        int z = 1;
        n = a.size();

        for (int x = 0; x < n; x += m)
        {
            // cout << x << ' ' << a.substr(x, m) << endl;
            if (a.substr(x, m) != b)
            {
                z = 0;
                break;
            }
        }
        if (z)
        {
            cout << a << '\n';
            return ;
        }
        a += t;
    }

    // else cout << a.substr(0, m) << ' ' << b << ' ' << n % m << '\n';

    cout << -1 << '\n';

    return;
}