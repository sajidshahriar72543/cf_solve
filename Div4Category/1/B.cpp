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

    //freopen("input.txt", "r", stdin)

    int x, test;

    cin >> test;

    while (test--)
    {
        cin >> x;

        ll a, sum = 0, xr = 0;

        lop(x)
        {
            cin >> a;

            sum += a;
            xr ^= a;
        }

        cout << 2 << '\n';
        cout << xr << ' ' << sum + xr << '\n';
    }

    return 0;
}
