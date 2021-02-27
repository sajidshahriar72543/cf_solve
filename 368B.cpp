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
#define Case(i)         cout << "Case " << int(i) << ": \n"

#define lop(n)          for(int i = 0; i < n; i++)
#define lopj(n)         for(int j = 0; j < n; j++)
#define lopr(a, n)      for(int k = a; k < n; k++)
#define lrev(n, a)      for(int i = n; i >= a; i--)
#define all(x)          x.begin(), x.end()

#define vin             vector <int>
#define vll             vector <ll>
#define vst             vector <string>
#define pii             pair <int, int>
#define pll             pair <ll, ll>
#define pss             pair <string, string>
#define vpii            vector <pair <int, int> >

#define fread           freopen("input.txt", "r", stdin)
#define fwrite          freopen("output.txt", "w", stdout)
#define fastio          ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)

#define mod             1000000007
#define PI              acos(-1.0)
#define inf             999999999999


using namespace std;


int main()
{
    fastio;

    int q, n, p;

    cin >> n >> q;

    int a[n], b[n];
    map <int, bool> att;

    lop(n) cin >> a[i];

    b[n - 1] = 1;
    att[a[n - 1]] = 1;

    //cout << "start\n";

    lrev(n - 2, 0)
    {
        if(att[a[i]])
        {
            b[i] = b[i + 1];
            continue;
        }

        att[a[i]] = 1;
        b[i] = b[i + 1] + 1;
    }

    lop(q)
    {
        cin >> p;

        cout << b[p - 1] << '\n';
    }

    return 0;
}

