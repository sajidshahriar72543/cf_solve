#pragma GCC optimize("Ofast,unroll-loops")
#pragma GCC target("avx,avx2,fma")

#include<bits/stdc++.h>

#define ll long long
#define pb push_back

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll t, n, a, k, r, rn, an, sum, i, j, inp;
    vector <ll> v, p;

    cin >> t;

    while(t--)
    {
        cin >> n;

        for(i = 0; i < n ; i++)
        {
            cin >> inp;
            v.pb(inp);
        }

        ll mp, pnsum = 0;

        for(i = 0; i < n ;)
        {
            if(v[i] > 0)
            {
                mp = v[i];

                for(j = i + 1; j < n; j++)
                {
                    if(v[j] < 0)
                    {
                        break;
                    }

                    mp = mp < v[j] ? v[j] : mp;
                    i++;
                    //cout << "mp " << mp << endl;
                }

                i++;
                pnsum += mp;
                //cout << "sum " << pnsum << endl;
            }

            if(i >= n)
                break;

            if(v[i] < 0)
            {
                mp = v[i];

                for(j = i + 1; j < n; j++)
                {
                    if(v[j] > 0)
                        break;

                    mp = mp < v[j] ? v[j] : mp;
                    i++;
                    //cout << "mp " << mp << endl;
                }

                i++;
                pnsum += mp;
                // cout << "sum " << pnsum << endl;
            }

            if(i >= n)
                break;
        }

        cout << pnsum << "\n";
        v.clear();
    }

    return 0;
}

