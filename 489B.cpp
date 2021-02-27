#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define lop(b) for(int i = 0; i < b; i++)
#define lopj(b) for(int j = 0; j < b; j++)

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    //freopen("input.txt", "r", stdin)

    int n, m;

    cin >> n;
    int b[n];
    lop(n) cin >> b[i];
    sort(b, b + n);

    cin >> m;
    int g[m];
    lop(m) cin >> g[i];
    sort(g, g + m);

    int x = 0;

    lop(n)
    {
        lopj(m)
        {
            if(abs(b[i] - g[j]) <= 1) {
                x++;
                g[j] = -100;
                break;
            }
        }
    }

    cout << x << '\n';

    return 0;
}

