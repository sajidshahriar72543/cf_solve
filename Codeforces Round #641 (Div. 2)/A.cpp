#include<bits/stdc++.h>

#define ll long long
#define lop(n) for(int i = 0; i < n; i++)
#define lop1(n) for(int i = 1; i <= n; i++)
#define ff first
#define ss second
#define pb push_back
#define mp make_pair
#define mod 1000000007
#define inf 999999999999

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll tt, n, k;

    cin >> tt;

    while(tt--)
    {
        cin >> n >> k;

        if(n % 2 == 0) {
            cout << n + (k * 2) << '\n';
            continue;
        }

        int c = 0, x = 0;

        for(ll i = 2; i * i <= n; i++) {
            if(i * i == n) {
                x = i;
                break;
            }
            if(n % i == 0) {
                x = i;
                break;
            }
        }

        if(x == 0) x = n;

        cout <<  (n + x) + ((k - 1) * 2) <<'\n';
    }



    return 0;
}

