#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define lop(a, b) for(int i = a; i < b; i++)
#define lopj(a, b) for(int j = a; j < b; j++)
#define yes cout << "YES\n"
#define no cout << "NO\n"

ll x, test, a, b, c, y, z;

bool valid()
{
    return x == max(a, b) and y == max(a, c) and z == max(b, c);
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> test;

    while(test--)
    {
        cin >> x >> y >> z;

        if(y >= x and z >= x)
        {
            a = b = x;
            c = max(x, max(y, z));
        }

        else if(x >= z and y >= z)
        {
            b = c = z;
            a = max(x, max(y, z));
        }

        else
        {
            a = c = y;
            b = max(x, max(y, z));
        }

        if(valid()) {
            yes;
            cout << a << " " << b << " " << c << '\n';
        }

        else no;

    }

    return 0;
}

