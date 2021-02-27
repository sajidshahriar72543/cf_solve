#include<bits/stdc++.h>

using namespace std;

int main()
{
    int m, i;

    cin >> m;

    int f[m];

    for(int i = 0; i < m; i++)
        cin >> f[i];

    sort(f, f + m);

    for(int i = 0; i < m; i++)
        cout << f[i] << " ";
    cout << endl;

    return 0;
}
