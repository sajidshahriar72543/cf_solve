#include<bits/stdc++.h>

using namespace std;

#define close(x) {cout << x << '\n'; continue;}

string Y = "YES", N = "NO";

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        int h[n], H[n], L[n];

        for (int i = 0; i < n; i++)
            cin >> H[i];
        for (int i = 0; i < n; i++)
            cin >> L[i];

        bool f = 1;
        for (int i = 1; i < n; i++) {
            if (H[i] < H[i - 1] or L[i] > L[i - 1] or (H[i] != H[i - 1] and L[i] != L[i - 1])) {
                f = 0;
                break;
            }
        }
        if (!f or H[0] != L[0]) close(-1);

        h[0] = H[0];
        int x = L[0] + 1;
        map <int, bool> ck;
        ck[L[0]] = 1;
        for (int i = 1; i < n; i++) {
            if (H[i] != H[i - 1])
                h[i] = H[i], ck[h[i]] = 1;

            else if (L[i] != L[i - 1])
                h[i] = L[i], x = L[i] + 1, ck[h[i]] = 1;

            else
            {
                while (ck[x] and x < H[i])
                    x++;
                h[i] = x++;
                ck[h[i]] = 1;
            }

            if (h[i] > H[i] or h[i] < L[i])
            {
                f = 0;
                break;
            }
        }

        if (!f) close(-1);

        if(ck.size() != n)
            f = 0;

        if (!f) close(-1);
        cout << n << '\n';
        for (int i = 0; i < n; ++i)
        {
            cout << h[i] << (i < n - 1 ? ' ' : '\n');
        }
    }

    return 0;
}
