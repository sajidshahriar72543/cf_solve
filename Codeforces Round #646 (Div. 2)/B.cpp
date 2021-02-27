#include<bits/stdc++.h>

#define ll long long
#define scan(a) scanf("%d", &a)
#define scanl(a) scanf("%lld", &a)
#define scand(a) scanf("%lf", &a)
#define scan2(a, b) scanf("%d %d", &a, &b)
#define scanl2(a, b) scanf("%lld %lld", &a, &b)
#define scand2(a, b) scanf("%lf %lf", &a, &b)
#define lop(n) for(int i = 0; i < n; i++)
#define lopr(a, n) for(int i = a; i < n; i++)
#define lopj(n) for(int j = 0; j < n; j++)
#define pb push_back
#define ff first
#define ss second
#define mp make_pair
#define all(x) x.begin(), x.end()
#define mod 1000000007
const long long inf = 999999999999;

using namespace std;

void OJ()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    //OJ();

    int tt, n;
    string s;

    cin >> tt;

    while(tt--)
    {
        cin >> s;

        int x = s.size(), zero = 0, one = 0, res;

        if(x == 1 or x == 2)
        {
            cout << 0 << '\n';
            continue;
        }

        lop(x)
        {
            one += (s[i] == '1' ? 1 : 0);
            zero += (s[i] == '0' ? 1 : 0);
        }

        res = min(one, zero); //whole string 0 or 1

        int l1 = 0, r1 = 0;

        lop(x)
        {
            if(s[i] == '1') {
                l1++;
                one--;
            }

            else {
                r1++;
                zero--;
            }

            res = min(res, l1 + zero); //0..1..
            res = min(res, r1 + one); // 1..0..
        }

        cout << res << '\n';
    }

    return 0;
}

