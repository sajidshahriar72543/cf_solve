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
#define Case(i)         printf("Case %d: \n", int(i))

#define lop(n)          for(int i = 0; i < n; i++)
#define lopj(n)         for(int j = 0; j < n; j++)
#define lopr(a, n)      for(int i = a; i < n; i++)
#define lrev(n, a)      for(int i = n; i >= a; i++)
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

    int tt, n, x, inp;

    cin >> tt;

    while(tt--)
    {
        cin >> n;

        vin lst[n + 1];
        bool boy[n + 1] = {0}, girl[n + 1] = {0};

        lopr(1, n + 1)
        {
            cin >> x;
            lopj(x) {
                cin >> inp;
                lst[i].pb(inp);
            }
        }

        int ung = 0, unb = 0;
        bool f = 0;
        lopr(1, n + 1)
        {
            x = lst[i].size();
            f = 0;
            lopj(x)
            {
                int p = lst[i][j];
                if(!boy[p]) {
                    boy[p] = 1;
                    girl[i] = 1;
                    //f = 1;
                    break;
                }
            }
//            if(f) {
//                ung = i;
//                break;
//            }
        }

//        if(!f)
//            cout << "OPTIMAL\n";
//        else
//        {
            lopr(1, n + 1)
                if(!boy[i]) {
                    unb = i;
                    break;
                }
            lopr(1, n + 1)
                if(!girl[i]) {
                    ung = i;
                    break;
                }
            if(ung and unb)
                cout << "IMPROVE\n" << ung << " " << unb << '\n';
            else
                cout << "OPTIMAL\n";
       // }
    }



    return 0;
}
