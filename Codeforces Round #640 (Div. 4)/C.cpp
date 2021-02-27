#include<bits/stdc++.h>

#define ll unsigned long long

using namespace std;

int main()
{
    ll tt, n, i, j, k;
    vector <ll> v;

    cin >> tt;

    while(tt--)
    {
        cin >> n >> k;

        ll s = k % (n - 1);
        ll v = k / (n - 1);

        //cout << s << " " << v << endl;

        if(s == 0)
            cout << (v * n) - 1 << '\n';
        else
            cout << (v * n) + s << '\n';
    }

    return 0;
}
