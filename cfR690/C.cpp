#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define lop(b) for(int i = 0; i < b; i++)
#define loop(j, a, b) for(int j = a; j < b; j++)
#define yes cout << "yes\n"
#define no cout << "no\n"

const int N = 1e7;

string s = "123456789";

void solve();

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

void solve()
{
    ll n;
    cin >> n;

    if (n > 45) {
        cout << -1 << '\n';
        return;
    }

    set <ll> st;
    ll l = 10;
    for (int i = 0; i < (1 << l); i++)
    {
        int x = 0;
        string ss;
        for (int j = 0; j < l; j++)
            if (i & (1 << j))
                x += s[j] - '0', ss += s[j];
        if (x == n)
        {
            stringstream sss(ss);
            ll p;
            sss >> p;
            st.insert(p);
        }
    }

    cout << *st.begin() << '\n';
    return;
}