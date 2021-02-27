#include<bits/stdc++.h>

using namespace std;

#define N 100

bool mark[N + 1];
vector <int> primes;

void sieve()
{
    int i, l = sqrt(N * 1.0), j;

    //primes.push_back(2);

    for(i = 2; i <= N; i++)
    {
        if(!mark[i])
        {
            primes.push_back(i);

            for(j = i + i; j <= N; j += i)
                mark[j] = true;
        }
    }
}

int main()
{
    sieve();

//    for(int i = 0; i < primes.size(); i++)
//        cout << primes[i] << " ";

    int n, m, x;
    string res = "YES";

    cin >> n >> m;

    x = upper_bound(primes.begin(), primes.end(), n) - primes.begin();

    //cout << primes[x];

    if(primes[x] != m)
        res = "NO";

    cout << res << endl;

    return 0;
}
