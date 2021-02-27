#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define lop(b) for(int i = 0; i < b; i++)
#define loop(j, a, b) for(int j = a; j < b; j++)
#define yes cout << "yes\n"
#define no cout << "no\n"

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
    int n, m;
    cin >> n >> m;

    set <int> st;

    lop(n)
    {
        int k;
        cin >> k;
        st.insert(k);
    }

    lop(m)
    {
        int k;
        cin >> k;
        st.insert(k);
    }

    int p = st.size();

    cout << n + m - p << '\n';
}