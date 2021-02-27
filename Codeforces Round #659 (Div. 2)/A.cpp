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
#define lopr(a, n)      for(int k = a; k < n; k++)
#define lrev(n, a)      for(int i = n; i >= a; i--)

#define all(x)          x.begin(), x.end()
#define mem(a, b)       memset(a, b, sizeof(a))

#define vin             vector <int>
#define vll             vector <ll>
#define vst             vector <string>
#define pll             pair <ll, ll>
#define pss             pair <string, string>
#define vpll            vector <pll>

#define fread           freopen("input.txt", "r", stdin)
#define fwrite          freopen("output.txt", "w", stdout)
#define fastio          ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)

#define mod             1000000007
#define PI              acos(-1.0)
#define inf             999999999999


using namespace std;


int main()
{
    //fastio;

    int tt, n;

    cin >> tt;

    while(tt--)
    {
        cin >> n;

        int a[n];

        string s1;

        lop(n) cin >> a[i];

        lop(a[0])
        s1 += 'a';

        if(a[0] == 0)
            s1 += 'z';

        cout << s1 << '\n';

        lop(n - 1)
        {
            string s2 = "";

            if(a[i] == 0)
            {
                char c = s1[0] == 'z' ? 'a' : 'z';
                c = s1[0] == 'a' ? 'z' : 'a';
                lopj(a[i + 1] + 1)
                s2 += c;
                s1 = s2;

                cout << s2 << '\n';
                continue;
            }

            lopj(a[i])
                s2 += s1[j];

            if(a[i] < a[i + 1])
            {
                char c = s2[a[i] - 1] + 1;
                if(c > 'z') c = 'a';

                if(s1.size() > a[i] and s1[a[i]] == c)
                {
                    c++;
                    if(c > 'z') c = 'a';
                }

                int x = a[i + 1] - a[i];

                lopj(x)
                    s2 += c;
            }

            //cout << s2 << " " << a[i + 1] << " - " << s2.size() << '\n';
            cout << s2 << '\n';

            s1 = s2;
        }

        string s2;

        if(a[n - 1] == 0)
        {
            char c = s1[0] == 'z' ? 'a' : 'z';
            c = s1[0] == 'a' ? 'z' : 'a';
            lopj(a[n - 1] + 1)
            s2 += c;
        }

        else
        {
            lopj(a[n - 1])
            s2 += s1[j];
        }
        s2 += 'p';

        cout << s2 << '\n';
    }

    return 0;
}
