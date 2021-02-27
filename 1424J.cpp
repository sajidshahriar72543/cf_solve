#include<bits/stdc++.h>

using namespace std;

const int N = 1e6 + 6;

bool mark[N + 1];

void sieve()
{
    mark[1] = 1;

    for(int i = 4;  i <= N; i += 2)
        mark[i] = 1;

    for(int i = 3; i * i <= N; i += 2)
    {
        if(!mark[i]) {
            for(int j = i * i; j <= N; j += 2 * i)
            {
                mark[j] = 1;
            }
        }
    }
}

long long fnd[N + 1];

void calp()
{
    fnd[2] = 1;
    for(int i = 3; i < N; i++)
        fnd[i] = fnd[i - 1] + (mark[i] ? 0 : 1);
}

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    sieve();
    calp();

    int t;

    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;

        if(n <= 3)
        {
            cout << n << '\n';
            continue;
        }

        cout << fnd[n] - fnd[(int) sqrt(n)] + 1<< '\n';
    }

    return 0;
}