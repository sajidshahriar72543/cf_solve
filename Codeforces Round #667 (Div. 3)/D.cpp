#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define lop(a, b) for(int i = a; i < b; i++)
#define lopj(a, b) for(int j = a; j < b; j++)
#define yes cout << "yes\n"
#define no cout << "no\n"

ll sumd(ll n)
{
    ll x = 0;

    while(n)
    {
        x += n % 10;
        n /= 10;
    }

    return x;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    //freopen("input.txt", "r", stdin)

    ll n, test, s;

    cin >> test;

    while(test--)
    {
        cin >> n >> s;

        if(sumd(n) <= s) {
            cout << 0 << '\n';
            continue;
        }

        ll x = sumd(n);
        ll p = n, m = 0;

        while(p and x >= s)
            x -= p % 10, p /= 10, m++;

        p++;

        while(m--)
            p *= 10;

        cout << p - n << '\n';
    }

    return 0;
}

