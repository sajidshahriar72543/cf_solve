#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long x, n, m, i, t;

    cin >> t;

    while(t--)
    {
        cin >> x >> n >> m;

        for(i = 0; i < n; i++) {
            if(x <= (10 * m))
                break;

            x = ((x / 2) + 10);
        }

        x = x - (10 * m);

        if(x > 0)
            cout << "No\n";
        else
            cout << "Yes\n";
    }

    return 0;
}
