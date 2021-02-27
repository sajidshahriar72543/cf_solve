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
#define pii             pair <int, int>
#define pss             pair <string, string>
#define vpii            vector <pii>

#define fread           freopen("input.txt", "r", stdin)
#define fwrite          freopen("output.txt", "w", stdout)
#define fastio          ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)

#define mod             (const int) 1e9+7
#define PI              acos(-1.0)
#define inf             (1 << 61)
#define N               (const int) 1e5+9


using namespace std;

int main()
{
    fastio;
    int test, n, k;
    string s;

    cin >> test;

    while(test--)
    {
        cin >> n >> k >> s;

        int l = 0;
        lop(n) if(s[i] == 'W') l++;

        int ans = min(l + k, n) * 2;
        l = 0;
        vin v;

        int i = 0, j = n - 1;
        while(s[i] == 'L') i++;
        while(s[j] == 'L') j--;

        while(i <= j)
        {
            if(s[i] == 'L')
                l++;
            else if(s[i] == 'W' and l)
                v.pb(l), l = 0;

            i++;
        }

        sorta(v);

        l = 0, n = 0;
        lop(v.size())
        {
            l += v[i];

            if(l > k)
                break;
            n++;
        }

        ans -= v.size() - n;
        cout << max(ans - 1, 0) << '\n';
    }

    return 0;
}
