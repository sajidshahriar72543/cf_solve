#include<bits/stdc++.h>

#define ll long long

using namespace std;

int main()
{
    ll tt, n, i, j;
    vector <ll> v;

    cin >> tt;

    while(tt--)
    {
        cin >> n;

        ll s = 1;

        while(n > 0)
        {
            ll p = n % 10;
            n /= 10;

            if(p != 0)
                v.push_back(p * s);

            s *= 10;
        }

        cout << v.size() << '\n';
        for(int i = 0; i < v.size(); i++)
            cout << v[i] << " ";
        cout << '\n';
        v.clear();
    }

    return 0;
}
