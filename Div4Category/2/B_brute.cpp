#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define lop(b) for(int i = 0; i < b; i++)
#define loop(j, a, b) for(int j = a; j < b; j++)
#define yes cout << "yes\n"
#define no cout << "no\n"

int X[] = {4, 8, 15, 16, 23, 42};

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;

    int a[n];
    lop(n) cin >> a[i];

    int x = 0, f = 1;

    while (f)
    {
        int k = 0;
        lop(6)
        {
            bool ff = 0;
            loop(j, k, n)
            {
                if (a[j] == X[i])
                {
                    a[j] = 0;
                    ff = 1;
                    k = j + 1;
                    break;
                }
            }
            if (!ff) {
                f = 0;
                break;
            }
        }

        if (f) x++;
    }

    cout << n - (x * 6) << '\n';

    return 0;
}
