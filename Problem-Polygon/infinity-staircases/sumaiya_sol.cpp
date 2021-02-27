#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define ll long long
#define pb push_back
#define lop(i,n) for(int i=0;i<n;i++)
#define lop1(i,n) for(int i=1;i<=n;i++)
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
#define mem(b,a) memset(a,b,sizeof(a))
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
//setbit clearbit toggle k-1, k-1
#define setbit(x,k)   (x |=(1<<k))
#define clearbit(x,k) (x &= ~(1<<k))
#define togglebit(x,k)  (x ^=  (1<<k))
#define checkbit(x,k) (x& (1<<k))
// v.erase(unique(v.begin(),v.end()),v.end());
#define inf INT_MAX
#define nn cout<<endl
#define mn 1000000
int main()
{
    fast
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        n = n - 1;
        if (n < 3)
        {
            cout << "1" << endl;
            continue;
        }

        ll sum;
        ll step = 0;
        ll cou3, need2;
        ll ans;
        if (n >= 3)
        {
            cou3 = n / 3;

            for (int i = cou3; i >= 0; i--)
            {
                need2 = (i - 1);
                sum = (i * 3) + (need2 * 2);

                if (sum <= n)
                {
                    ans = i + need2;
                    break;
                }
            }


        }

        if (n - sum > 0)
        {
            if (n - sum > 2)
            {
                ans += 2;
            }
            else
            {
                ans++;
            }
        }

        cout << ans << endl;
    }


}