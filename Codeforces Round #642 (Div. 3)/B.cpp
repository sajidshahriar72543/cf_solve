
#include<bits/stdc++.h>

#define ll long long
#define lop(n) for(int i = 0; i < n; i++)
#define lop1(n) for(int i = 1; i <= n; i++)
#define lopj(n) for(int j = i; j < n; j++)
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

    int tt, n, k;

    cin >> tt;

    while(tt--)
    {
        cin >> n >> k;

        int a[n], b[n];

        lop(n) cin >> a[i];
        lop(n) cin >> b[i];

        sort(a, a + n);
        sort(b, b + n, greater <int> ());

        int p = 0;

        lop(n)
        {
            if(p == k) break;

            if(a[i] < b[i]) {a[i] = b[i]; p++;}

            if(a[i] > b[i]) break;
        }

        int sum = 0;

        //lop(n) cout << a[i] ;

        lop(n) sum += a[i];

        cout << sum << '\n';
    }



    return 0;
}
