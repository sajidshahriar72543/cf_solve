#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, m;

    cin >> n >> m;

    int c[n], w[m];

    for(int i = 0; i < n; i++)
        cin >> c[i];
    for(int i = 0; i < m; i++)
        cin >> w[i];

    sort(c, c + n);
    sort(w, w + m);

    int v = c[0] * 2, ans = max(v, c[n - 1]);

    if(ans >= w[0])
        ans = -1;

    cout << ans;

    return 0;
}
