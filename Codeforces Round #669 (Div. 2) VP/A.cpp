#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define lop(b) for(int i = 0; i < b; i++)
#define loop(j, a, b) for(int j = a; j < b; j++)
#define yes cout << "yes\n"
#define no cout << "no\n"

int main()
{
//    ios_base::sync_with_stdio(0);
//    cin.tie(0);
//    cout.tie(0);

    //freopen("input.txt", "r", stdin)

    int x, test;

    cin >> test;

    while(test--)
    {
        cin >> x;

        int a[x];

        lop(x) cin >> a[i];

        int od1 = 0, ev1 = 0, s = 0;
        lop(x)
        {
            if(i & 1)
                od1 += a[i];
            else
                ev1 += a[i];

            if(od1 == ev1)
                s = i + 1;
        }

        int one = od1 + ev1, zero = x - one;

        if(zero >= x / 2)
        {
            cout << zero << endl;
            lop(zero)
                cout << 0 << ' ';
            cout << '\n';
        }

        else
        {
            if(one & 1)
                one--;

            cout << one << endl;
            lop(one)
                cout << 1 << ' ';
            cout << '\n';

        }

    }

    return 0;
}

