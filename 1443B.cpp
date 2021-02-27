#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define lop(b) for(int i = 0; i < b; i++)
#define loop(j, a, b) for(int j = a; j < b; j++)
#define yes cout << "yes\n"
#define no cout << "no\n"

int main()
{
    int x, test;

    cin >> test;

    while (test--)
    {
        ll a, b;
        string s;
        cin >> a >> b >> s;

        int n = s.size(), st = 0, en = n - 1;

        while (st < n and s[st] == '0') st++;
        while (en >= 0 and s[en] == '0') en--;

        vector <int> v;
        int c = 0;
        loop(i, st, en + 1)
        {
            if (s[i] == '0')
            {
                if (c) v.push_back(1), c = 0;
                v.push_back(0);
            }
            else c++;

            if (i == en) v.push_back(1);
        }

        n = v.size();

        if (n < 2)
        {
            cout << (n ? a : 0) << '\n';
            continue;
        }



        ll ans = 0, i = 0, j;
        for (; i < n; i++)
        {
            ll o = 1, z = 0, k = 0, p = 0;
            for (j = i + 1; j < n; j++)
            {
                if (v[j]) o++;
                else z++;

                if (v[j])
                {
                    if ((z - p) * b > a)
                    {
                        o--;
                        i = j - 1;
                        if (!k)
                            k += a;
                        break;
                    }
                    else
                        k = (z * b) + a, i = j, p = z;
                }

                //printf("%d %d %d %d\n", j, o, z, k);
            }

            //cout << i << ' ' << k << '\n';
            ans += k;
            if (j == n and !k)
            {
                ans += a;
                break;
            }
        }

        cout << ans << '\n';
    }

    return 0;
}
