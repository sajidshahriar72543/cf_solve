#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define lop(b) for(int i = 0; i < b; i++)
#define loop(j, a, b) for(int j = a; j < b; j++)
#define yes cout << "yes\n"
#define no cout << "no\n"

const ll mod = 998244353;

ll inv(ll a, ll b){
 return 1 < a ? b - inv(b % a, a) * b / a : 1;
}

ll power(ll p)
{
    ll x = 1;
    while(p--) x = (x * 2LL) % mod;

    return x;
}

ll fibo(ll n)
{
    ll a = 0, b = 1, c = b;
    lop(n - 1)
    {
        c = (a + b) % mod;
        a = b % mod;
        b = c % mod;
    }

    return c;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll n;
    cin >> n;

    cout << (fibo(n) * inv(power(n), mod)) % mod;

    return 0;
}

