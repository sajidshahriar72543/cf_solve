#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define lop(a, b) for(int i = a; i < b; i++)
#define lopj(a, b) for(int j = a; j < b; j++)

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    //freopen("input.txt", "r", stdin)

    ll n, test, m, k, l, r, x;

    cin >> test;

    while(test--)
    {
        cin >> n >> x >> m;

        ll l1 = x, r1 = x;

        lop(0, m)
        {
            cin >> l >> r;

            if((l <= l1 and r >= l1) or (l >= l1 and l <= r1)) {
                l1 = min(l, l1);
                r1 = max(r1, r);
            }

            //cout << l1 << " " << r1 << endl;
        }

        cout << (r1 - l1) + 1 << '\n';
    }

    return 0;
}

