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

    //freopen("input.txt", "r", stdin)

    int x, test;

    cin >> test;

    while (test--)
    {
        int n, q;
        string s;
        cin >> n >> q >> s;

        while (q--)
        {
            int l, r;
            cin >> l >> r;
            l--, r--;

            bool f = 0;
            int p = l, b, a;
            for (int i = 0; i < n; i++)
            {
                if (l <= r and s[i] == s[l])
                {
                    l++;
                    if (l > r) b = i;
                    if (l == p + 1) a = i;
                }
                else if (l > r and s[i] == s[l - 1])
                    f = 1;
                if (i < p and s[i] == s[p])
                    f = 1;
            }

            if (l > r and (f or b - a > r - p)) yes;
            else no;
        }
    }

    return 0;
}
