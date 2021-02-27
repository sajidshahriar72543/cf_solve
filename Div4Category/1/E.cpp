#include<bits/stdc++.h>

using namespace std;

#define ll  long long
#define lop(b) for(int i = 0; i < b; i++)
#define loop(j, a, b) for(int j = a; j < b; j++)
#define yes cout << "yes\n"
#define no cout << "no\n"

int main()
{
    // ios_base::sync_with_stdio(0);
    // cin.tie(0);
    // cout.tie(0);

    // //freopen("input.txt", "r", stdin)

    int test;

    cin >> test;

    while (test--)
    {
        ll x;
        cin >> x;

        ll p = ((x - 15) / 14) * 14;
        string ans = "YES";
        cout << p << '\n';
        if (x < 15 or x < p + 15 or x > p + 20)
            ans = "NO";

        cout << ans << '\n';
    }

    return 0;
}
