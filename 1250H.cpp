#include<bits/stdc++.h>

#define lop(n) for(int i = 0; i < n; i++)
#define ff first
#define ss second

using namespace std;

void print(int n, int m)
{
    lop(m) cout << n;
    cout << '\n';
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int tt, n, m;

    cin >> tt;

    while(tt--)
    {
        pair <int, int> candle[10];

        lop(10)
        {
            cin >> candle[i].ff;
            candle[i].ss = i;
        }

        sort(candle, candle + 10);

        if(candle[0].ss == 0)
        {
            if(candle[0].ff == candle[1].ff)
                print(candle[1].ss, candle[1].ff + 1);
            else
            {
                cout << 1;
                print(candle[0].ss, candle[0].ff + 1);
            }
        }
        else
            print(candle[0].ss, candle[0].ff + 1);
    }

    return 0;
}
