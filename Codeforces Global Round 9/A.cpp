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

    int x, test;

    cin >> test;

    while (test--)
    {
        cin >> x;

        ll a;

        lop(0, x)
        {
            cin >> a;

            if (i & 1) cout << abs(a) << ' ';
            else cout << -abs(a) << ' ';
        }

        cout << '\n';
    }

    return 0;
}

