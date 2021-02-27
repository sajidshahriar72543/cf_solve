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

    ll x1, x2, y1, y2, test;

    cin >> test;

    while(test--)
    {
        cin >> x1 >> y1 >> x2 >> y2;

        ll ans = abs(x1 - x2) + abs(y1 - y2);
        if(x1 != x2 and y1 != y2)
            ans += 2;

        cout << ans << '\n';
    }

    return 0;
}
