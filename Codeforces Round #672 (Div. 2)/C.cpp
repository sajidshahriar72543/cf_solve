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

    int x, test, y;

    cin >> test;

    while(test--)
    {
        cin >> x >> y;

        ll a[x];

        lop(x) cin >> a[i];

        ll sum = 0, p = INT_MAX, q = INT_MAX, z = 0;;
        bool f = 0;

        lop(x)
        {
            if(!f)
            {
//                if(a[i] > z)
//                {
//                    sum += a[i] - z;
//                    z = a[i];
//                    f ^= 1;
//                    continue;
//                }

                if(p == q or a[i] >= p) {
                    sum += a[i], sum -= p, p = q;
                    z = a[i];
                    f ^= 1;
                }

                else
                {
                    p = a[i];
                }
            }

            if(f)
            {
                if(a[i] > z)
                {
                    sum += a[i] - z;
                    z = a[i];
                    continue;
                }

                if(sum - a[i] <= 0)
                {
                    sum = a[i];
                    p = q;
                    f = 1;
                }

                else
                {
                    if(a[i] < p) {
                        p = a[i];
                        f ^= 1;
                    }
                }
            }


//            cout << i << ' ' << a[i] << ' ' << f << ' ' << sum << ' ' << p << '\n';
        }

        cout << sum << '\n';
    }

    return 0;
}

