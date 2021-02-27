#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t, n, m, b, w, i, j;

    cin >> t;

    while(t--)
    {
        cin >> n >> m;


        for(i = 0; i < n; i++)
        {
            for(j = 0; j < m; j++)
            {
                if(i == 0 && j == 0)
                    cout << 'W';
                else
                    cout << 'B';
            }
            cout << endl;
        }
    }

    return 0;
}
