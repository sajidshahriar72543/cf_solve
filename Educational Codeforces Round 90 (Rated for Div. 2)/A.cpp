#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define lop(a, b) for(int i = a; i < b; i++)
#define lopj(a, b) for(int j = a; j < b; j++)
#define yes cout << "yes\n"
#define no cout << "no\n"

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    //freopen("input.txt", "r", stdin)

    ll x, test, a, b, c;

    cin >> test;

    while(test--)
    {
        cin >> a >> b >> c;

        if(b == 1) {
            if(a > c) cout << -1 << " " << 1 << '\n';
            else if(a < c) cout << 1 << " " << -1 << '\n';
            else cout << -1 << " " << -1 << '\n';

            continue;
        }

        if(a == c) {
            cout << -1 << " " << b << '\n';
            continue;
        }

        if(a > c) {
            cout << -1 << " " << b << '\n';
        }

        else if(b * a <= c) {
            cout << 1 << " " << -1 << '\n';
        }

        else if(b * a > c and a < c) {
            cout << 1 << " " << b << '\n';
        }

        else cout << -1 << " " << -1 << '\n';

    }

    return 0;
}

