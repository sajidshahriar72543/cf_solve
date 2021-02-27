#include<bits/stdc++.h>

#define ll long long
#define pb push_back

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);


    ll tt, n, k, i, j, inp, l, t;
    vector <ll> v;

    cin >> tt;

    while(tt--)
    {
        cin >> n >> k;

        for(i = 0; i < n; i++)
        {
            cin >> inp;
            v.pb(inp);
        }

        ll c, maxc = 0;
        for(i = 0; i <= n - k; i++)
        {
            c = 0;
            for(j = i + 1; j < i + k - 1; j++)
            {
                if(v[j] > v[j - 1] && v[j] > v[j + 1])
                    c++;
            }
            if(c > maxc)
            {
                maxc = c;
                l = i + 1;
            }
        }
        maxc++;

        if(maxc == 1) {
          maxc = 1;
          l = 1;
        }
        cout << maxc << " " << l << '\n';
        v.clear();
    }

    return 0;
}

