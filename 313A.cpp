#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;

    cin >> n;

    if(n > 0) {
        cout << n << endl;
        return 0;
    }

    if(n > -100 and n % 10 == 0) {
        cout << 0 << endl;
        return 0;
    }

    int a = abs(n % 10);
    n /= 10;
    int b = abs(n % 10);
    n /= 10;

    if(abs(n) > 0)
        cout << n;
    else
        cout << '-';

    cout << min(a, b) << endl;

    return 0;
}
