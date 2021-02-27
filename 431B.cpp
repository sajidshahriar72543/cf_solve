#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);


    ll g[5][5];
    int a[5] = {0, 1, 2, 3, 4};

    ll h = 0, s = 0;

    for(int i = 0; i < 5; i++)
        for(int j = 0; j < 5; j++)
            cin >> g[i][j];

    do
    {
        s = 0;
        for(int i = 0; i < 4; i++)
        {
            for(int j = i; j < 4; j += 2)
                s += g[a[j]][a[j + 1]], s += g[a[j + 1]][a[j]];
        }

        h = max(h, s);
    }
    while(next_permutation(a, a + 5));

    cout << h;
}
