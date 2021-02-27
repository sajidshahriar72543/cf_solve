#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, q, p;

    cin >> n;

    int a[n];

    for(int i = 0; i < n; i++)
        cin >> a[i];

    sort(a, a + n);

    cin >> q;

    for(int i = 0; i < q; i++)
    {
        cin >> p;

        auto it = upper_bound(a, a + n, p) - a;

        cout << it << endl;
    }

    return 0;
}
