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

    int x, test;

    cin >> test;

    while (test--)
    {
        int n, c0, c1, h;
        string s;
        cin >> n >> c0 >> c1 >> h >> s;

        int cnt0 = 0, cnt1 = 0;
        for(auto &z : s)
        {
            cnt0 += z == '0';
            cnt1 += z == '1';
        }
        int cost = (cnt0 * c0) + (cnt1 * c1);
        int cost0 = (c0 * n) + (cnt1 * h);
        int cost1 = (c1 * n) + (cnt0 * h);

        cout << min({cost, cost0, cost1}) << '\n';
    }

    return 0;
}

