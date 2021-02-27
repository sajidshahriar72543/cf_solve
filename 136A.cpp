#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, x;

    cin >> n;

    int y[n + 1];

    for(int i = 1; i <= n; i++)
    {
        cin >> x;
        y[x] = i;
    }

    for(int i = 1; i <= n; i++)
    {
        cout << y[i] << " ";
    }
    cout << endl;

    return 0;
}
