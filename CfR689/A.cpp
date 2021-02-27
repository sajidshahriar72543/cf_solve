#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define lop(b) for(int i = 0; i < b; i++)
#define loop(j, a, b) for(int j = a; j < b; j++)
#define yes cout << "yes\n"
#define no cout << "no\n"

string S = "abc";

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
    int n, k;
    string s;

    cin >> n >> k;
    int c = 0, p = 0;

    lop(n)
    {
        s.push_back(S[p]);
        c++;

        if (c == k)
            c = 0, p = (p + 1) % 3;
    }

    cout << s << '\n';

    return;
}