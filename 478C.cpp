#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long a[3], ans, p;

    cin >> a[0] >> a[1] >> a[2];

    sort(a, a + 3);

    ans = a[0] + a[1] + a[2];
    ans /= 3;

    cout << min(ans, a[0] + a[1]) << endl;

    return 0;
}
