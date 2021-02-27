#include<bits/stdc++.h>

#define ll long long
#define scan(a) scanf("%d", &a)
#define scanl(a) scanf("%lld", &a)
#define scand(a) scanf("%lf", &a)
#define scan2(a, b) scanf("%d %d", &a, &b)
#define scanl2(a, b) scanf("%lld %lld", &a, &b)
#define scand2(a, b) scanf("%lf %lf", &a, &b)
#define lop(n) for(int i = 0; i < n; i++)
#define lop1(n) for(int i = 1; i <= n; i++)
#define lopj(n) for(int j = 0; j < n; j++)
#define pb push_back
#define ff first
#define ss second
#define mp make_pair
#define all(x) x.begin(), x.end()
#define mod 1000000007
const long long inf = 999999999999;

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int tt, n;

    cin >> tt;

    while(tt--)
    {
        cin >> n;
        int ar[n];
        int o = 0, e = 0;

        lop(n)  {
            cin >> ar[i];
            if(ar[i] % 2)
                e++;
            else
                o++;
        }

        if(o % 2 == 0 and e % 2 == 0)
        {
            cout << "YES\n";
            continue;
        }
        else if(o % 2 != e % 2) {
            cout << "NO\n";
            continue;
        }

        vector <int> vis;

        sort(ar, ar + n);

        lop(n - 1) {
            if(abs(ar[i] - ar[i + 1]) == 1) {
                    vis.pb(i);
                    vis.pb(i + 1);
                    i++;
                }
        }

        lop(n)
        {
            if(find(all(vis), i) != vis.end())
                continue;

           for(int j = i + 1; j < n; j++) {
                if(find(all(vis), j) != vis.end())
                    continue;

                if((ar[i] % 2 == ar[j] % 2)) {
                    vis.pb(i);
                    vis.pb(j);
                    break;
                }
           }
        }

        lop(vis.size())
            cout << vis[i] << " " << ar[vis[i]] << '\n';

        if(vis.size() == n)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}
