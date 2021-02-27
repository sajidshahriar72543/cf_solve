#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define lop(a, b) for(int i = a; i < b; i++)
#define lopj(a, b) for(int j = a; j < b; j++)
#define yes cout << "yes\n"
#define no cout << "no\n"

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);


    int x, test;
    ll l, r, m, a, b, c;

    cin >> test;

    while(test--)
    {
        cin >> l >> r >> m;

        for(int i = l; i <= r;)
        {
            c = i;
            ll p = m / i;
            if(p == 0) p++;
            p *= i;

            ll xx = m - p;

            if(xx == 0)
                a = b = r;
            else if(xx < 0)
            {
                b = r;
                a = r + xx;
            }
            else
            {
                a = r;
                b = r - xx;
            }

            if(a < l or b < l)
            {
                ll p = ceil(m / (i * 1.0));
                p *= i;

                ll xx = m - p;

                if(xx == 0)
                    a = b = r;
                else if(xx < 0)
                {
                    b = r;
                    a = r + xx;
                }
                else
                {
                    a = r;
                    b = r - xx;
                }
            }

            if(a < l or b < l)
                i++;
            else
                break;

        }

        cout << c << " " << a << " " << b << '\n';
    }

    return 0;
}

