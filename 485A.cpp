#include<bits/stdc++.h>

#define ll long long

using namespace std;

int main()
{
    ll a, n, x, k;

    cin >> a >> n;

    for(k = 1; k <= 30; k++)
    {
        x = a * (1 << k);

        if(x % n == 0) {
            cout << "Yes\n";
            return 0;
        }
    }

    cout << "No\n";
            return 0;
}
