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
        if (n == 1)
        {
            cout << "0" << endl;
        }
        else if (n == 5)
        {
            cout << "2" << endl;
            continue;
        }
        else if (n <= 4)
        {
            cout << "1" << endl;
            continue;
        }

        else
        {
            n -= 1;
            ll ans;
            ans = n / 5;
            ans = ans * 2;
            ll m = n % 5;
            if ((m == 1) || (m == 2) || (m == 3))
            {
                ans++;
            }
            if (m == 4)
            {
                ans += 2;
            }
            cout << ans << endl;
        }


    }


}