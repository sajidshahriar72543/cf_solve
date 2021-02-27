#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define lop(b) for(int i = 0; i < b; i++)
#define loop(j, a, b) for(int j = a; j < b; j++)
#define yes cout << "yes\n"
#define no cout << "no\n"

int n;

int ask(int l, int r)
{
    cout << "? " << l << ' ' << r << endl;
    int x; cin >> x;
    return x;
}

void print(int x)
{
    cout << "! " << x << endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> n;

    int s = ask(1, n), t = 0;
    if (s > 1) t = ask(1, s) == s;

    if (t)
    {
        int l = 1, h = s - 1, m, ans = 1;
        while (l <= h)
        {
            m = (l + h) / 2;
            if (m == s) break;

            int x = ask(m, s);
            if (x == s)
            {
                l = m + 1;
                ans = max(ans, m);
            }
            else
                h = m - 1;
        }

        print(ans);
    }
    else
    {
        int l = s + 1, h = n, m, ans = n;
        while (l <= h)
        {
            m = (l + h) / 2;
            if (m == s) break;

            int x = ask(s, m);
            if (x == s)
            {
                h = m - 1;
                ans = min(ans, m);
            }
            else
                l = m + 1;
        }

        print(ans);
    }

    return 0;
}