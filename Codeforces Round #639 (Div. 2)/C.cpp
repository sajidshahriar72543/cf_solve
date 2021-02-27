#include <bits/stdc++.h>

#define ll long long
#define N 10000000
using namespace std;

int main ()
{
    ll t, i, j, n, m, k, x;
    vector <ll> room, room2;
    cin >> t;

    while(t--)
    {
        cin >> n;

        for(i = 0; i < n; i++)
        {
            cin >> x;
            room.push_back(x);
        }

        for(k = 1; k <= n; k++)
        {
            x = k + room[k % n];
            room2.push_back(x);
        }

        sort(room2.begin(), room2.end());
        string ans = "YES\n";

        for(k = 0; k < n - 1; k++)
            if(room2[k] == room2[k + 1]) {
                ans = "NO\n";
                break;
            }

        cout << ans;
        room.clear();
        room2.clear();
    }

    return 0;
}

