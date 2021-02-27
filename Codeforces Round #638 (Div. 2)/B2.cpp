#include<bits/stdc++.h>

#define ll long long
#define pb push_back

using namespace std;

int main()
{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
//    cout.tie(NULL);

    ll tt, n, i, j, k, inp;
    vector <ll> v1, v2, v3, v4;
    set <ll> s1;

    cin >> tt;

    while(tt--)
    {
        cin >> n >> k;

        for(i = 0; i < n; i++)
        {
            cin >> inp;
            v1.push_back(inp);
            s1.insert(inp);
        }

        ll x = s1.size();
        if(x > k) {
            cout << -1 << '\n';
            v1.clear();
            s1.clear();
            continue;
        }

        vector <ll> v2(s1.begin(), s1.end());

        for(i = 1; i <= n; i++)
        {
            if(v2.size() == k)
                break;

            v2.push_back(1);
        }

        cout << n * k << endl;
        for(i = 0; i < n; i++) {
            for(j = 0; j < k; j++)
                cout << v2[j] << " ";
        }

        cout << '\n';

        v1.clear();
        s1.clear();
        v2.clear();
    }

    return 0;
}


