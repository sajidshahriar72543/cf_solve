#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, m;

    vector <int> v;

    cin >> n >> m;

    for(int i = m; i <= n; i += m)
        v.push_back(i);

    for(int i = 0; i < v.size(); i++)
        if(v[i] * 2 >= n)
        {
            cout << v[i];
            return 0;
        }

    cout << -1;

    return 0;
}
