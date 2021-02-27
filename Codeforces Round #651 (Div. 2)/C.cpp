#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define lop(a, b) for(ll i = a; i < b; i++)
#define lopj(a, b) for(int j = a; j < b; j++)

int main()
{
//    ios_base::sync_with_stdio(0);
//    cin.tie(0);
//    cout.tie(0);

    //freopen("input.txt", "r", stdin)

    ll x, test;

    cin >> test;

    while(test--)
    {
        cin >> x;

        if(x == 1)
        {
            cout << "FastestFinger\n";
            continue;
        }
        if(x == 2)
        {
            cout << "Ashishgup\n";
            continue;
        }
        if(x % 1)
        {
            cout << "Ashishgup\n";
            continue;
        }

        int i = 0;

        for(i = 0; ; i++)
        {
            if(x < 2) break;

            //cout << x << " ";

            ll div = 0;

            if(x % 2) div = x;
            else
            {
                lop(3, sqrt(x) + 2)
                {
                    if(x % i == 0)
                    {
                        if((x / i) % 2) div = max(div, x / i);
                        else if(i % 2) div = max(div, i);
                    }
                }
            }

            if(div) x /= div;
            else
            {
                x--;
            }

        }


        cout << (i % 2 == 0 ? "FastestFinger" : "Ashishgup") << '\n';
    }

    return 0;
}

