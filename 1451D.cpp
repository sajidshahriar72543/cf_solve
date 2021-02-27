#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define lop(b) for(int i = 0; i < b; i++)
#define loop(j, a, b) for(int j = a; j < b; j++)
#define yes cout << "Ashish\n"
#define no cout << "Utkarsh\n"

ll d;

bool check(ll p, ll q)
{
    return (p * p) + (q * q) <= d * d;
}

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
        ll k;
        cin >> d >> k;
        bool f = 0;
        ll x, y;
        x = y = 0;

        while (1)
        {
            if (!f)
            {
                if (check(x + k, y))
                    x += k;
                else if (check(x, y + k))
                    y += k;
                else break;
            }
            else
            {
                if (check(x, y + k))
                    y += k;
                else if (check(x + k, y))
                    x += k;
                else break;
            }

            //cout << x << ' ' << y << '\n';

            f ^= 1;
        }

        if (f) yes;
        else no;
    }

    return 0;
}

