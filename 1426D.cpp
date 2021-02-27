#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define lop(b) for(int i = 0; i < b; i++)
#define loop(j, a, b) for(int j = a; j < b; j++)
#define yes cout << "yes\n"
#define no cout << "no\n"

const ll inf = (1 << 30);

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;

    cin >> n;

    ll a[n + 1], s, ans;
    ans = s = a[0] = 0;

    map <ll, bool> ase;
    ase[0LL] = 1;

    loop(i, 1, n + 1)
    {
        cin >> a[i];
        s += a[i];

        if(ase[s]) s += inf, ase[s - a[i]] = 1, ans ++;
        
        ase[s] = 1;
    }

    cout << ans << '\n';

    return 0;
}
