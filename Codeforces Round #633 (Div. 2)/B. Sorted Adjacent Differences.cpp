#include<bits/stdc++.h>

#define ll long long

using namespace std;

int main()
{
    ll t, n, i, inp;
    vector <ll> v;

    scanf("%lld", &t);

    while(t--)
    {
        scanf("%lld", &n);

        pair <int, int> di[n - 1];

        for(i = 0; i < n; i++) {
            scanf("%lld", &inp);
            v.push_back(inp);
        }

        sort(v.begin(), v.end());

        int m = n % 2 == 0 ? (n - 1) / 2 : n / 2;

        for(i = 0; i < n;) {

            //cout << "m = " << m << " ";
            printf("%lld ", v[m]);

            i++;
            i % 2 == 1 ? m += i : m -= i;
        }

        printf("\n");
        v.clear();

    }

    return 0;
}
