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

    int x, test;

    cin >> test;

    while(test--)
    {
        cin >> x;

        int a[x], b[x], c[x], p[x];

        lop(x) cin >> a[i];
        lop(x) cin >> b[i];
        lop(x) cin >> c[i];

        p[0] = a[0];
        loop(i, 1, x)
        {
            if(a[i] == p[i - 1])
            {
                if(b[i] == p[i - 1])
                    p[i] = c[i];
                else
                    p[i] = b[i];
            }
            else
                p[i] = a[i];

            //cout << a[i] << ' ' << b[i] << ' ' << c[i] << ' ' << p[i] << endl;
        }

        if(a[x - 1] == p[0] or a[x - 1] == p[x - 2])
            {
                if(b[x - 1] == p[0] or b[x - 1] == p[x - 2])
                    p[x - 1] = c[x - 1];
                else
                    p[x - 1] = b[x - 1];
            }
            else
                p[x - 1] = a[x - 1];

        lop(x) cout << p[i] << ' ';
        cout << endl;
    }

    return 0;
}
