#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define lop(b) for(int i = 0; i < b; i++)
#define loop(j, a, b) for(int j = a; j < b; j++)
#define yes cout << "YES\n"
#define no cout << "NO\n"

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int x, test;

    cin >> test;

    while (test--)
    {
        cin >> x;
        int a[x];
        int s = 0, f = 1;
        lop(x)
            cin >> a[i], s += a[i];

        if (!s)
        {
            no;
            continue;
        }

        yes;

        f = 0;
        int p = 0;

        while (!f and p < 3)
        {
            if(p < 1)
                sort(a, a + x);
            if(p > 1)
                sort(a, a + x, greater <int> ());

            p++;
            s = 0;

            lop(x)
            {
                s += a[i];

                if (!s)
                {
                    bool ff = 0;
                    loop(j, i + 1, x)
                    {
                        if (a[j] != a[i] and a[j])
                        {
                            s -= a[i]; s += a[j];
                            swap(a[j], a[i]);
                            ff = 1;
                            break;
                        }
                    }
                    if (!ff)
                    {
                        for (int j = i - 1; j >= 0; j--)
                        {
                            if (a[j] != a[i + 1] and a[j])
                            {
                                s -= a[j]; s += a[i + 1];
                                swap(a[j], a[i + 1]);
                                ff = 1;
                                break;
                            }
                        }
                    }
                }
            }

            s = 0, f = 1;
            lop(x)
            {
                s += a[i];
                if (!s)
                    f = 0;
            }
        }

        //cout << p << '\t';
        lop(x) cout << a[i] << ' ';
        cout << '\n';
    }

    return 0;
}
