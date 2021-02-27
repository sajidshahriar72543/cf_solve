#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long t, n, k, fb, sb;

    cin >> t;

    while(t--)
    {
        cin >> n >> k;

        double p = (1.0 - sqrt(1.0 + (8.0 * k))) * -1;

        long long x = (ceil(p) + 1) / 2;

        fb = n - x;

        long long xx = (x * (x - 1)) / 2;

        sb = n - (k - xx) + 1;

//        cout << k << ' ' << xx << ' ' << x << endl;
//        cout << fb << ' ' << sb << '\n';

        for(long long i = 1; i <= n; i++)
        {
            if(i == fb or i == sb)
                cout << 'b';
            else
                cout << 'a';
        }

        cout << '\n';
    }

    return 0;
}
