#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define lop(b) for(int i = 0; i < b; i++)
#define loop(j, a, b) for(int j = a; j < b; j++)
#define yes cout << "yes\n"
#define no cout << "no\n"

ll facto(ll x)
{
    ll p = 1;
    for(int i = 2; i <= x; i++)
        p *= i;

    return p;
}
ll ncr(ll n)
{
    ll r = n / 2;

    return facto(n) / (facto(r) * facto(n - r));
}
int main()
{
    ll n;
    cin >> n;

    cout << facto(n) / (n * (n / 2)) << '\n';
    //main();
    return 0;
}

