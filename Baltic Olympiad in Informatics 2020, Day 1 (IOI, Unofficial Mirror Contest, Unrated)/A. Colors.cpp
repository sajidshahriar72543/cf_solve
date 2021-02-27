#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    int test;
    ll n, m;
    bool x, f, ff;

    cin >> test;

    while(test--)
    {
        cin >> n;

        ll lo = 1, hi = n;
        ll mid = lo + ((hi - lo) / 2);

        cout << "? " << 1 << endl;
        cin >> x;
        m = f = ff = 1;
        int pp = 1;

        while(lo < hi)
        {
            pp++;
            if(hi - lo == 1)
            {
                cout << "= " << hi << endl;
                f = 0;
                //cout << lo << ' ' << hi << ' ' << mid << endl;
                break;
            }

            if(m + mid <= n)
                m += mid;
            else
            {
                if(m - mid < 1) {
                    m = 1;
                    cout << "? " << m << endl;
                    cin >> x;
                    continue;
                }
                else
                    m -= mid;
            }

            cout << "? " << m << endl;
            cin >> x;

            if(x == 0)
                lo = mid;
            else
                hi = mid;

            mid = lo + ((hi - lo) / 2);

            //cout << lo << ' ' << hi << ' ' << mid << endl;
        }

        cout << pp << '\n';
        if(f)
            cout << "= " << n << endl;
    }

    return 0;
}
