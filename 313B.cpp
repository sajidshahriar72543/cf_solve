#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string s;
    int m, l, r;

    cin >> s;

    int n = s.size();

    int pre[n + 1] = {0};

    for(int i = 0; i < n - 1; i++)
        pre[i + 1] = pre[i] + (s[i] == s[i + 1]);

    cin >> m;

    for(int i = 0; i < m; i++)
    {
        cin >> l >> r;

        cout << pre[r - 1] - pre[l - 1] << '\n';
    }

    return 0;
}
