#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define lop(b) for(int i = 0; i < b; i++)
#define loop(j, a, b) for(int j = a; j < b; j++)
#define yes cout << "yes\n"
#define no cout << "no\n"

void solve()
{
    int n;
    cin >> n;
    int x[n];
    //bool vis[(2 * n) + 10] = {0};

    lop(n) cin >> x[i];

    set <int> ans;
    int k = 0;
    lop(n)
    {
        ans.insert(x[i]);
        if (ans.size() == k)
            ans.insert(x[i] + 1);
        k = ans.size();
    }

    //for (double z : ans) cout << z << ' ';
    cout << ans.size() << '\n';
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    //freopen("input.txt", "r", stdin)

    int x, test;

    cin >> test;

    while (test--)
    {
        solve();
    }

    return 0;
}