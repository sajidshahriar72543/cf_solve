#include<bits/stdc++.h>

#define ll long long
#define scan(a) scanf("%d", &a)
#define scanl(a) scanf("%lld", &a)
#define scand(a) scanf("%lf", &a)
#define scan2(a, b) scanf("%d %d", &a, &b)
#define scanl2(a, b) scanf("%lld %lld", &a, &b)
#define scand2(a, b) scanf("%lf %lf", &a, &b)
#define lop(n) for(int i = 0; i < n; i++)
#define lopr(a, n) for(int i = 0; i < n; i++)
#define lopj(n) for(int j = 0; j < n; j++)
#define pb push_back
#define ff first
#define ss second
#define mp make_pair
#define all(x) x.begin(), x.end()
#define mod 1000000007
#define yes cout << "Yes\n"
#define no cout << "No\n"
const long long inf = 999999999999;

using namespace std;

void OJ()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

}

int main()
{
//    ios_base::sync_with_stdio(0);
//    cin.tie(0);
//    cout.tie(0);

    //OJ();

    ll tt, n, x;

    cin >> tt;

    while(tt--)
    {
        cin >> n >> x;

        ll a, odd = 0, even = 0;

        lop(n)
        {
            cin >> a;
            if(a % 2 == 1)
                odd++;
            else
                even++;
        }

        if(odd == 0) {
            no; continue;
        }

        if(even == 0)
        {
            if(x % 2 == 1)
                yes;
            else
                no;
        }

        else
        {
            if(x <= odd)
                yes;

            else
            {
                if(odd + even == x and odd % 2 == 0)
                    no;
                else
                    yes;
            }
        }

    }


//        if(odd % 2 == 1) {
//            if(x % 2 == 1)
//                cout << "Yes\n";
//            else if(even != 0)
//                cout << "Yes\n";
//            else
//                cout << "No\n";
//        }
//
//        else
//        {
//            if(x % 2 == 1)
//            {
//                if(odd > x)
//                   cout << "Yes\n";
//                else if(odd + even == x or even == 0)
//                    cout << "No\n";
//                else
//                    cout << "Yes\n";
//            }
//
//            else if(odd + even == x or even == 0)
//                cout << "No\n";
//            else
//                cout << "Yes\n";
//        }
//    }

    return 0;
}

