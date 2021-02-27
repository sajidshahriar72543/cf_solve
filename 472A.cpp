#include<bits/stdc++.h>
#define N 1000003

using namespace std;

bool mark[N + 1];

void sieve()
{
    int i, j, limit = sqrt(N * 1.0);

    for(i = 4; i <= N; i += 2)
        mark[i] = true;

    for(i = 3; i <= limit; i += 2)
    {
        if(mark[i] == false)
        {
            for(j = i * i; j <= N; j += i * 2)
                mark[j] = true;
        }
    }
}

int main()
{
    sieve();
    //cout << mark[13] << endl;

    int n, a, b;

    cin >> n;

    a = n / 2;
    b = n - a;

    while(1)
    {
        if(mark[a] && mark[b]) {
            cout << a << " " << b << endl;
            return 0;
        }
        else {
            a--;
            b++;
        }
    }
}
