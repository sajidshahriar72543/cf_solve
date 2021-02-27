#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define lop(b) for(int i = 0; i < b; i++)
#define loop(j, a, b) for(int j = a; j < b; j++)
#define yes cout << "yes\n"
#define no cout << "no\n"


ll sq(ll z)
{
    return z * z;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    //freopen("input.txt", "r", stdin)

    ll x, test, y, z;

    cin >> test;

    while(test--)
    {
        cin >> x >> y >> z;

        ll p = x + y + z;

        cout << p - 1 << '\n';
    }

    return 0;
}

