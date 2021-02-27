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

void OJ()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

}

int main()
{
    auto start = std::chrono::high_resolution_clock::now();

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    //OJ();

    ll tt, n;

    cin >> tt;

    while(tt--)
    {
        cin >> n;

        ll e, ec[n + 1] = {0};

        lop(n) {
            cin >> e;
            ec[e]++;
        }

        ll team = 0, rem = 0, m = 0;

        lop1(n)
        {
            team += (ec[i] / i);
            ec[i] %= i;
            rem += ec[i];

            if(ec[i] != 0 and rem >= i)
            {
                team++;
                rem %= i;
            }
        }

        cout << team << '\n';
    }

    auto end = std::chrono::high_resolution_clock::now();

    //#ifdef PERVEEVM_LOCAL
        std::cerr << "Execution time: "
                  << std::chrono::duration_cast<std::chrono::milliseconds>(end - start).count()
                  << " ms" << std::endl;
    //#endif

    return 0;
}

