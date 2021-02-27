#include<bits/stdc++.h>

using namespace std;

#define close(x) {cout << x << '\n'; continue;}

string Y = "YES", N = "NO";

int main()
{
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
        if (H[n - 1] - L[n - 1] + 1 < n) f = 0;
        if (!f or H[0] != L[0]) close(N);

        h[0] = H[0];
        int x = L[0] + 1;
        for (int i = 1; i < n; i++) {
            if (H[i] != H[i - 1])
                h[i] = H[i];

            else if (L[i] != L[i - 1])
                h[i] = L[i], x = L[i] + 1;

            else
                h[i] = x++;

            if (h[i] > H[i] or h[i] < L[i])
            {
                f = 0;
                break;
            }
        }

        if (!f) close(N);
        close(Y);
    }

    return 0;
}
