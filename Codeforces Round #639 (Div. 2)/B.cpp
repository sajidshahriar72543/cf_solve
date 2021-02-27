#include <bits/stdc++.h>

#define ll long long
#define N 10000000
using namespace std;

ll card[N + 1];
ll p;
void cardred()
{
    card[1] = 2;

    for(ll i = 2; ; i++)
    {
        p++;
        card[i] = card[i - 1] + (2 * i) + i - 1;
        if(card[i] > 1000001009) {
            p++;
            break;
        }
    }
}

//ll binarsec()
//{
//    ll lo = 1, hi = p + 1, mid;
//
//    while(1)
//
//}

int main ()
{
    cardred();

    ll t, i, j, n, m;
    cin >> t;

    while(t--)
    {
        cin >> n;
        ll sum = 0;

        while(n > 1)
        {
           ll x = lower_bound(card, card + p, n) - card;

           if(card[x] <= n) {
                n -= card[x];
                sum++;
           }

           else {
                x--;
                sum++;
                n -= card[x];
           }
        }

        cout << sum << '\n';
    }

    return 0;
}
