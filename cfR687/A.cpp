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
        ll n, m, x, y;
        cin >> n >> m >> x >> y;

        ll a = x - 1 + y - 1;
        ll b = n - x + m - y;
        ll c = x - 1 + m - y;
        ll d = n - x + y - 1;

        cout << max({a, b, c, d}) << '\n';
    }

    return 0;
}
