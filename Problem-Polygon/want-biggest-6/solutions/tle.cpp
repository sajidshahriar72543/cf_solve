#include<bits/stdc++.h>

using namespace std;

#define close(x) {printf("-1\n"); continue;}

int main()
{
    //ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while (t--)
    {
        int n; scanf("%d", &n);
        int h[n], H[n], L[n];

        for (int i = 0; i < n; i++)
            scanf("%d", &H[i]);
        for (int i = 0; i < n; i++)
            scanf("%d", &L[i]);

        bool f = 1;
        for (int i = 1; i < n; i++) {
            if (H[i] < H[i - 1] or L[i] > L[i - 1] or (H[i] != H[i - 1] and L[i] != L[i - 1])) {
                f = 0;
                break;
            }
        }
        if (H[0] != L[0]) f = 0;

        h[0] = H[0];
        map <int, bool> ck;
        ck[h[0]] = 1;
        for (int i = 1; i < n; i++) {
            if (H[i] != H[i - 1])
                h[i] = H[i], ck[h[i]] = 1;

            else if (L[i] != L[i - 1])
                h[i] = L[i], ck[h[i]] = 1;

            else
            {
                for (int j = L[i]; j <= H[i]; j++)
                {
                    if (ck[j] == 0)
                    {
                        h[i] = j;
                        ck[j] = 1;
                        break;
                    }
                }

            }
        }

        for (int i = 0; i < n; i++)
            if (h[i] > H[i] or h[i] < L[i])
            {
                f = 0;
                break;
            }

        set <int> st(h, h + n);
        if (st.size() != n)
            f = 0;

        if (!f) close(-1);
        cout << n << '\n';
        for (int i = 0; i < n; ++i)
        {
            printf("%d", h[i]);
            if (i < n - 1)
                printf(" ");
            else
                printf("\n");
        }
    }

    return 0;
}
