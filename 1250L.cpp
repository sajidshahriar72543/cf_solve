#include<bits/stdc++.h>

#define ll long long

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int tt, a, b, c;

    cin >> tt;

    while(tt--)
    {
        cin >> a >> b >> c;

        int m = max(a, c), n = min(a, c);

        if(a == c and a > b) {
            cout << a << endl;
        }

        else if(b + n < m / 2) {
            cout << (m + 1) / 2 << '\n';
        }

        else if(b < n)
        {
            if(m - n + b <= n)
                cout << n << endl;
            else
                cout << (a + b + c + 2) / 3 << endl;
        }

        else
            cout << (a + b + c + 2) / 3 << endl;
    }

    return 0;
}
