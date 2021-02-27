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

    ll x, test;

    cin >> test;

    while(test--)
    {
        cin >> x;

        ll ans = ceil(sqrt(x) * 1.0);

        ll p = ceil((x - ans) / (ans * 1.0));

        cout << p + ans - 1 << '\n';
    }

    return 0;
}
