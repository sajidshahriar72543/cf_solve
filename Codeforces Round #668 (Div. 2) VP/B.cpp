#include<bits/stdc++.h>

#define ll              long long
#define pb              push_back
#define ff              first
#define ss              second
#define mp              make_pair

#define scan(a)         scanf("%d", &a)
#define scanl(a)        scanf("%lld", &a)
#define scand(a)        scanf("%lf", &a)
#define scan2(a, b)     scanf("%d %d", &a, &b)
#define scanl2(a, b)    scanf("%lld %lld", &a, &b)
#define scand2(a, b)    scanf("%lf %lf", &a, &b)

#define yes             cout << "yes\n"
#define no              cout << "no\n"
#define Case(i)         cout << "Case " << int(i) << ": "

#define lop(n)          for(int i = 0; i < n; i++)
#define lopj(n)         for(int j = 0; j < n; j++)
#define loop(k, a, b)   for(int k = a; k < b; k++)
#define loopr(j, b, a)  for(int j = b; j >= a; j--)
#define lopc(i, a, b, c) for(int i = a; i < b; i += c)

#define all(x)          x.begin(), x.end()
#define sorta(x)        sort(x.begin(), x.end())
#define sortd(x)        sort(x.rbegin(), x.rend())
#define mem0(a)         memset(a, 0, sizeof(a))
#define mem1(a)         memset(a, -1, sizeof(a))

#define vin             vector <int>
#define vll             vector <ll>
#define vst             vector <string>
#define pll             pair <ll, ll>
#define pss             pair <string, string>
#define vpll            vector <pll>

#define fread           freopen("input.txt", "r", stdin)
#define fwrite          freopen("output.txt", "w", stdout)
#define fastio          ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)

#define mod             (const int) 1e9+7
#define PI              acos(-1.0)
#define inf             (1 << 61)
#define N               (const int) 1e6+5


using namespace std;

bool comp(pll a, pll b)
{
    if(a.ff == b.ff)
        return a.ss < b.ss;

    else
        return a.ff > b.ff;
}
bool comp2(pll a, pll b)
{
    if(a.ff == b.ff)
        return a.ss > b.ss;

    else
        return a.ff > b.ff;
}


int main()
{
    fastio;

    int tt, n;

    cin >> tt;

    while(tt--)
    {
        cin >> n;

        ll a;
        vpll ps, ng;

        lop(n)
        {
            cin >> a;

            if(a < 0)
                ng.pb({a, i});

            else if(a > 0)
                ps.pb({a, i});
        }

        int x = ng.size(), y = ps.size();
        ll c = 0;

        sort(all(ng), comp2);
        sort(all(ps), comp);

        for(int i = x - 1, j = 0; i >= 0 or j < y ;)
        {
            if(ng[i].ff == 0) {
                i--;
                continue;
            }

            if(ps[j].ff == 0) {
                j++;
                continue;
            }

            ll z = min(-ng[i].ff, ps[j].ff);

            //printf("%d %d %lld %lld %lld\t", i, j, ng[i].ff, ps[j].ff, z);

            ng[i].ff += z, ps[j].ff -= z;

            if(ng[i].ss < ps[j].ss)
                c += z;

            //printf("%d %d %lld %lld %lld\n", ng[i].ss, ps[j].ss, ng[i].ff, ps[j].ff, c);


//            loop(j, 0, n) cout << a[j] << ' ';
//            cout << endl;
        }

//        for(int i = x - 1, j = 0; i >= 0 or j < y ;)
//        {
//            if(a[ng[i]] == 0) {
//                i--;
//                continue;
//            }
//
//            if(a[ps[j]] == 0) {
//                j++;
//                continue;
//            }
//
//            ll z = min(-a[ng[i]], a[ps[j]]);
//
//            printf("%d %d %d %d %lld\t", i, j, ng[i], ps[j], z);
//
//            a[ng[i]] += z, a[ps[j]] -= z;
//
//            if(ng[i] < ps[j])
//                c += z;
//
//            loop(j, 0, n) cout << a[j] << ' ';
//            cout << endl;
//        }

        cout << c << '\n';
    }

    return 0;
}
