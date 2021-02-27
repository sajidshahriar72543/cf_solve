#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define lop(a, b) for(int i = a; i < b; i++)
#define lopj(a, b) for(int j = a; j < b; j++)
#define yes cout << "yes\n"
#define no cout << "no\n"

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    //freopen("input.txt", "r", stdin)

    int x, test, n, y;

    cin >> test;

    while(test--)
    {
        cin >> n >> x >> y;

        if(n == 2) {
            cout << x << ' ' << y << '\n';
            continue;
        }

        int c, k;
        for(k = 1; ; k++)
        {
            bool f = 0;
            c = 0;
            for(int j = x; j <= y; j += k)
            {
                c++;
                if(j == y)
                    f = 1;
            }

            if(f and c <= n)
                break;
        }

        int ans = x;
        for(int i = 0; i < c; i++)
        {
            cout << ans << ' ';
            ans += k;
        }

        ans = x - k;
        c = n - c;
        n = c;
        for(int i = 0; i < c; i++)
        {
            if(ans <= 0) {
                break;
            }

            cout << ans << ' ';
            ans -= k;
            n--;
        }

        //cout << c << '\t';
        ans = y + k;
        for(int i = 0; i < n; i++)
        {
            cout << ans << ' ';
            ans += k;
        }
        cout << '\n';
    }

    return 0;
}

