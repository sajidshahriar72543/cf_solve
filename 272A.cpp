#include<bits/stdc++.h>

using namespace std;

int main()
{
    int x, n, s = 0, p;

    cin >> x;

    n = x;

    while(n--)
    {
        cin >> p;

        s += p;
    }

    x++;

    p = 6;

    int ans = 0;

    while(--p) {
     if((s + p) % x != 1)
            ans++;
    }

    cout << ans << '\n';

    return 0;
}

