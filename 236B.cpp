#include<bits/stdc++.h>

#define ll long long
#define lop(n) for(int i = 0; i < n; i++)
#define lop1(n) for(int i = 1; i <= n; i++)
#define lopj(n) for(int j = i; j < n; j++)
#define lopj1(n) for(int j = 1; j <= n; j++)
#define lopk1(n) for(int k = 1; k <= n; k++)
#define pb push_back
#define ff first
#define ss second
#define mp make_pair
#define all(x) x.begin(), x.end()
#define mod 1073741824
#define N 1000009
const long long inf = 999999999999;

using namespace std;

bool mark[N + 1];
int nP;
vector <int> primes;

void sieve();
int td(int x);

int main()
{
//    ios_base::sync_with_stdio(0);
//    cin.tie(0);
//    cout.tie(0);

    sieve();

    int a, b, c, i, j, k;
    ll sum = 0;

    cin >> a >> b >> c;


    lop1(a)
    {
        lopj1(b)
        {
            lopk1(c)
            {
                int d = td(i * j * k);

                //cout << i * j * k << "\t" << d << '\n';

                sum = ((sum % mod) + (d % mod)) % mod;
            }
        }
    }

    cout << sum << '\n';

    return 0;
}

void sieve()
{
    int i, j, limit = sqrt(N * 1.0);

    mark[0] = mark[1] = true;

    primes.push_back(2);

    for(i = 4; i <= N; i += 2)
        mark[i] = true;

    for(i = 3; i <= limit; i += 2)
    {
        if(mark[i] == false)
        {
            for(j = i * i; j <= N; j += (i * 2))
                mark[j] = true;
        }
    }

    for(i = 3; i <= N; i += 2)
    {
        if(!mark[i]) {
            primes.push_back(i);
        }
    }

    nP = primes.size();

    return;
}

int td(int x)
{
    int i, c, divisors = 1, j = primes[0];

    for(i = 0; j * j <= x && i < nP; i++)
    {
        j = primes[i];
        c = 1;

        while(x % j == 0) {
            x /= j;
            c++;
        }

        divisors *= c;
    }

    if(x != 1)
        divisors *= 2;

    return divisors;
}
