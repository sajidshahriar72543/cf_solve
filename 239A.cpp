#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define lop(b) for(int i = 0; i < b; i++)
#define loop(j, a, b) for(int j = a; j < b; j++)
#define yes cout << "yes\n"
#define no cout << "no\n"

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    //freopen("input.txt", "r", stdin)

    ll y, k, n;

    cin >> y >> k >> n;

    ll i = 1, p = 0;

    while(i * k <= n)
    {
        if((i * k) > y)
            cout << (i * k) - y << ' ', p++;
        i++;
    }

    if(!p)
        cout << -1;

    return 0;
}
