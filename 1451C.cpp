#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define lop(b) for(int i = 0; i < b; i++)
#define loop(j, a, b) for(int j = a; j < b; j++)
#define yes cout << "Yes\n"
#define no cout << "No\n"

int c1[26], c2[26];

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
        int n, k;
        string s, t;

        cin >> n >> k >> s >> t;
        lop(n) c1[s[i] - 'a']++;
        lop(n) c2[t[i] - 'a']++;

        bool f = 1;
        lop(26)
        {
            int z = min(c2[i], c1[i]);
            c1[i] -= z;
            c2[i] -= z;
        }

        lop(26)
        {
            if (c2[i] % k) f = 0;
            loop(j, 0, i)
            {
                if (c1[j] % k)
                    f = 0;

                int z = min(c2[i], (c1[j] / k) * k);
                c2[i] -= z;
                c1[j] -= z;
            }
        }

        lop(26) if (c2[i] or c1[i]) f = 0;

        f ? yes : no;
        memset(c1, 0, sizeof c1);
        memset(c2, 0, sizeof c2);
    }

    return 0;
}
