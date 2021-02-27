#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    ll n, res;

    cin >> n;

    res = ceil(n / 2.0);

    if(n % 2 != 0)
        res *= -1;

    cout << res << endl;

    return 0;
}
