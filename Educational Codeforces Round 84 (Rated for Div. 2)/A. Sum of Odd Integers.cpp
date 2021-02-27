#include<bits/stdc++.h>

using namespace std;

int main()
{
    unsigned long long t, n, k;
    cin >> t;
    while(t--)
    {
        cin >> n >> k;

        if(n < k * k) {
            cout << "NO\n";
            continue;
        }
        if(n % 2 != k % 2)
            cout << "NO\n";
        else
            cout << "YES\n";
    }

    return 0;
}
