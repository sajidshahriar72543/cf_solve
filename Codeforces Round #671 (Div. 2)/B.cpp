#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define lop(b) for(int i = 0; i < b; i++)
#define loop(j, a, b) for(int j = a; j < b; j++)
#define yes cout << "yes\n"
#define no cout << "no\n"


const int N = 33;
const ll inf = 1e17;

ll a[N];

void f()
{
    ll i = 1, p = 1;

    for(; i < 33;i++)
    {
        a[i] = a[i - 1] + (p * p) + a[i - 1];
        p *= 2;
    }
}



int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    f();

    ll x, test;

    cin >> test;

    while(test--)
    {
        cin >> x;

        int res = 0;
        ll sum = 0;

        loop(i, 1, 33)
        {
            if(a[i] + sum > x)
                break;

            sum += a[i];
            res++;
        }

        cout << res << '\n';
    }

    return 0;
}

