#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define lop(a, b) for(int i = a; i <= b; i++)
#define lopj(a, b) for(int j = a; j <= b; j++)

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    //freopen("input.txt", "r", stdin)

    int n, ans = 0, l[3];

    cin >> n >> l[0] >> l[1] >> l[2];

    sort(l, l + 3);

    int x = l[0];

    if(n % x == 0) {
        cout << n / x << '\n';
        return 0;
    }

    int c = l[0], b = l[1], a = l[2];

    lop(0, n / a)
    {
        lopj(0, n / b)
        {
            int x = n - (a * i) - (b * j);
            int p = (x / c), q = p * c;

            if(q == x)
                ans = max(ans, i + j + p);

            //printf("i = %d j = %d x = %d p = %d q = %d ans = %d\n", i, j, x, p, q, ans);
        }
    }

    cout << ans << endl;

    return 0;
}

