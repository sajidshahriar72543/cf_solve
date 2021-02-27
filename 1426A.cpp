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

    ll x, test, k;

    cin >> test;

    while(test--)
    {
        cin >> x >> k;

        if(x <= 2)
        {
            cout << 1 << '\n';
            continue;
        }

        ll ans = ceil((x - 2) / (k * 1.0)) + 1;

        cout << ans << '\n';
    }

    return 0;
}
