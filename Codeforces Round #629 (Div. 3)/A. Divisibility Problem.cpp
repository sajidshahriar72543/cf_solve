#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long t, a, b, i, x, y;

    cin >> t;

    while(t--)
    {
        cin >> a >> b;

        if(a % b == 0) {
            cout << 0 << endl;
            continue;
        }

        x = a / b;
        y = b * (x + 1);

        cout << y - a << endl;
    }

    return 0;
}
