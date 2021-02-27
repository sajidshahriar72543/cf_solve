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

        ll m = 0;
        for(i = 0; i < n; i++)
        {
            cin >> inp;
            v1.push_back(inp);
            s1.insert(inp);
            m = m < inp ? inp : m;
        }

        ll sum = 0, msum = 99999999999999999;
        bool flag = true;
        for(i = 0; i <= n - k; i++)
        {
            sum = 0;
            for(j = i; j < i + k; j++)
                sum += v1[j];
            v2.push_back(sum);
            if(msum != 0 && sum != msum)
                flag = false;
            //cout << "sum " << sum << " msum " << msum << " m " << m << endl;
            msum = msum > sum ? sum : msum;
        }

        if(flag == true) {
            cout << n << '\n';
            for(i = 0; i < n; i++)
                cout << v1[i] << " ";
            cout << '\n';
            v1.clear();
            v2.clear();
            continue;
        }

        if(msum <= m) {
            cout << -1 << '\n';
            v1.clear();
            v2.clear();
            continue;
        }

        v3.push_back(v1[0]);
        for(i = 0, j = 1; i < v2.size() - 1; i++)
        {
            if(v2[i] == v2[i + 1]) {
                v3.push_back(v1[j]);
                j++;
            }
            else {
                v3.push_back(abs(v2[i] - v2[i + 1]) + v1[j]);
                v3.push_back(v1[j]);
                j++;
                i++;
            }
        }

        for(; j < n; j++)
            v3.push_back(v1[j]);

        cout << v3.size() << endl;
        for(i = 0; i < v3.size(); i++)
                cout << v3[i] << " ";
        cout << '\n';

        v1.clear();
        v2.clear();
    }

    return 0;
}

