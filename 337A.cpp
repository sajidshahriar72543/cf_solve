#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, m, i;

    cin >> n >> m;

    int f[m];

    for(int i = 0; i < m; i++)
        cin >> f[i];

    sort(f, f + m);

    int mindiff = 9999999;
    for(int i = 0; i <= m - n; i++)
        mindiff = mindiff > (f[i + n - 1] - f[i]) ? f[i + n - 1] - f[i] : mindiff;

    cout << mindiff << endl;

    return 0;
}
