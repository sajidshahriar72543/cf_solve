#include<bits/stdc++.h>

using namespace std;

int main()
{
    int x = 0, a[5], n = 5;

    while(n--)
    {
        cin >> a[n];
        x += a[n];
    }

    if(x == 0)
        x++;

    cout << (x % 5 == 0 ? x / 5 : -1) << '\n';

    return 0;
}
