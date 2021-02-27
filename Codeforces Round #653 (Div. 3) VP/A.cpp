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

    ll x, test, y, n, k;

    cin >> test;

    while(test--)
    {
        cin >> x >> y >> n;

        k = n / x;
        ll nn = x * k;

        if(n - nn >= y)
            k = nn + y;
        else
            k = nn - (x - y);

        cout << k << '\n';
    }

    return 0;
}

