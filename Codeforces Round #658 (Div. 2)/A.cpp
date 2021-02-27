#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define lop(a, b) for(int i = a; i < b; i++)
#define lopj(a, b) for(int j = a; j < b; j++)
#define yes cout << "YES\n"
#define no cout << "NO\n"

int x[1009];

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int test, n, m;

    cin >> test;

    while(test--)
    {
        cin >> n >> m;

        int a[n], b[m], res = 0;

        lop(0, n)
        {
            cin >> a[i];
            x[a[i]]++;
        }

        lop(0, m)
        {
            cin >> b[i];

            if(x[b[i]])
                res = b[i];
        }

        if(res)
        {
            yes;
            cout << 1 << " " << res << '\n';
        }

        else
            no;

        memset(x, 0, sizeof(x));
    }

    return 0;
}
