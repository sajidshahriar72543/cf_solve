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


    ll t, n, k, i, j, inp, l;
    vector <ll> v, peaks;

    cin >> t;

    while(t--)
    {
        cin >> n >> k;

        for(i = 0; i < n; i++)
        {
            cin >> inp;
            v.pb(inp);

            if(i > 1 && i < n)
            {
                if(v[i - 1] > v[i - 2] && v[i - 1] > v[i])
                    peaks.pb(i - 1);
            }
        }

        ll peak = peaks.size();
        if(peak == 1)
        {
            l = peaks[0] - (k - 2) + 1;

            if(l < 1)
                l = 1;

            cout << 2 << " " << l << '\n';
            v.clear();
            peaks.clear();
            continue;
        }
        if(peak == 0)
        {
            cout << 1 << " " << 1 << '\n';
            v.clear();
            peaks.clear();
            continue;
        }

        ll dis, maxa = 0, c;
        for(i = 0; i < peak; i++)
        {
           // printf("peaks[%lld] = %lld - %lld\n", i, peaks[i], v[peaks[i]]);
            dis = 0;
            c = 1;
            for(j = i + 1; j < peak; j++)
            {
                if(peaks[j] - peaks[i] >= k - 2)
                    break;

                dis = peaks[j] - peaks[i];
                //cout << "j " << peaks[j] << " " << peaks[i] << endl;
                c++;
            }

            if(c > maxa)
            {
                maxa = c;
                l = peaks[i] - ((k - 2) - dis) + 1;

                if(l < 1)
                    l = 1;

//                cout << "peaks = " << peaks[i] << endl;
//                cout << "dis = " << dis << endl;
            }

        }

        cout << maxa + 1 << " " << l << '\n';
        v.clear();
        peaks.clear();
    }

    return 0;
}

