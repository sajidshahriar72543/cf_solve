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
    fastio;

    int tt, n, a, b, c, d;

    cin >> tt;

    while(tt--)
    {
        cin >> n;

        if(n <= 30)
            no;
        else
        {
            yes;

            if(n - 30 == 6 or n - 30 == 14 or n - 30 == 10)
            {
                a = 6;
                b = 10;
                c = 15;
                d = n - 31;
            }
//            if(n - 30 == 10)
//            {
//                a = 6;
//                b = 14;
//                c = 15;
//                d = n - 35;
//            }
//            if(n - 30 == 14)
//            {
//                a = 6;
//                b = 10;
//                c = 15;
//                d = n - 31;
//            }
            else
            {
                a = 6;
                b = 10;
                c = 14;
                d = n - 30;
            }

            cout << a << ' ' << b << ' ' << c << ' ' << d << '\n';
        }
    }



    return 0;
}

