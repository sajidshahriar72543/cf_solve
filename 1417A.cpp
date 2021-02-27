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

    int x, test, k;

    cin >> test;

    while(test--)
    {
        cin >> x >> k;

        int a[x];

        lop(x) cin >> a[i];

        sort(a, a + x, greater <int> ());

        ll ans = 0;

        lop(x - 1)
        {
            if(a[i] > k)
                continue;

            ans += (k - a[i]) / a[x - 1];
        }

        cout << ans << '\n';
    }

    return 0;
}
