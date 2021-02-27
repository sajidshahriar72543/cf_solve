#include<bits/stdc++.h>

#define ll long long

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll n, q, i, j, pp;

    cin >> n;

    ll arr[n + 1], v[n + 1] = {0}, p[n + 1] = {0};

    for(i = 1; i <= n; i++)
    {
        cin >> arr[i];
        v[arr[i]] = i;
        p[arr[i]] = n - i + 1;
    }

    cin >> q;

    ll iv = 0, ip = 0;
    for(i = 1; i <= q; i++)
    {
        cin >> pp;
        iv += v[pp];
        ip += p[pp];
    }

    cout << iv << " " << ip << '\n';

    return 0;
}
