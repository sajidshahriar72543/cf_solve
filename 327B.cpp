#include<bits/stdc++.h>

using namespace std;

const int N = 2e6+3;
bool mark[N + 1];
vector <int> primes;

void sieve()
{
    int lmt = sqrt(N);

    mark[1] = 1;

    for(int i = 4; i <= N; i += 2) mark[i] = 1;

    for(int i = 3; i * i <= N; i += 2)
    {
        if(!mark[i])
        {
            for(int j = i * i; j <= N; j += 2 * i)
                mark[j] = 1;
        }
    }

    for(int i = 2; i <= N; i++)
        if((!mark[i]))
            primes.push_back(i);
}

int main()
{
    sieve();

    int n;

    cin >> n;

    for(int i = 0; i < n; i++)
        cout << primes[i] << ' ';

    return 0;
}
