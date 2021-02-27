#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long t, x, y, a, b;

    cin >> t;

    while(t--)
    {
        cin >> x >> y >> a >> b;
        if((y - x) % (a + b) != 0)
            cout << -1 << endl;
        else
            cout << (y - x) / (a + b) << endl;
    }

    return 0;
}
