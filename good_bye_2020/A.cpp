#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define lop(b) for(int i = 0; i < b; i++)
#define loop(j, a, b) for(int j = a; j < b; j++)
#define yes cout << "yes\n"
#define no cout << "no\n"

double area(int x1, int y1, int x2, int y2, int x3, int y3)
{
    double s = abs((x1 * y2) - (x2 * y1) + (x2 * y3) - (x3 * y2) + (x3 * y1) - (x1 * y3));

    return s * 0.5;
}
void solve()
{
    int n;
    cin >> n;
    int x[n + 1], y[n + 1] = {0};

    lop(n) cin >> x[i];
    x[n] = 0;
    y[n] = 1;

    set <double> st;
    lop(n)
    {
        loop(j, i + 1, n)
        {
            double s = area(x[i], y[i], x[j], y[j], 0, 1);

            if (s > 0.0f)
                st.insert(s);

        }
    }

    //for (double z : st) cout << z << ' ';
    cout << st.size() << '\n';
}

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