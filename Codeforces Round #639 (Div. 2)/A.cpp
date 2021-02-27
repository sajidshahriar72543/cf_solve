#include <bits/stdc++.h>

#define ll long long

using namespace std;

int main ()
{
    ll t, i, j, n, m;
    cin >> t;

    while(t--)
    {
        cin >> n >> m;

        if(n == 1 || m == 1) {
            cout << "yes\n";
        }

        else if(n == 2 && m == 2) {
            cout << "yes\n";
        }

        else
            cout << "No\n";
    }

    return 0;
}


