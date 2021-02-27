
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t, n, x, k, i, j;
    int cp[202];

    cin >> t;

    while(t--)
    {
        cin >> n >> x;

        for(i = 0; i < 202; i++)
            cp[i] = 0;

        for(i = 0; i < n; i++)
        {
            cin >> k;
            cp[k] = 1;
        }

        for(i = 1, j = 1; j <= x; i++)
        {
            if(cp[i] != 1) {
                cp[i] = 1;
                j++;
            }
        }

        for(i = 1; i <= n + x; i++) {
            if(cp[i] == 0)
                break;
        }

        cout << i - 1<< endl;
    }
}
