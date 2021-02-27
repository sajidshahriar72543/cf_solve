#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, k;

    cin >> n >> k;

    int a[n + 1];

    for(int i = 1; i <= n; i++)
        cin >> a[i], a[i] += a[i - 1];

    int res, mn = INT_MAX;

    for(int i = k; i <= n; i++)
    {
        if(a[i] - a[i - k] < mn)
        {
            mn = a[i] - a[i - k];
            res = i - k;
        }
    }

    cout << ++res;

    return 0;
}
