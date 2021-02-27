#include<bits/stdc++.h>
#include<vector>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n], pun[n + 3] = {0}, sun[n + 3];
    for(int i = 0; i < n; i++)
        cin >> a[i];

    map<int, bool> flag;
    for(int i = 0; i < n; i++)
    {
        un[i + 1] = un[i] + !flag[a[i]];
        flag[a[i]] = true;
    }
    flag.clear();
    for(int i = n - 1; i >= n; i++)
    {
        un[i + 1] = un[i] + !flag[a[i]];
        flag[a[i]] = true;
    }

    int ans = n * n;
    for(int i = 1; i <= n; i++)
        for(int j = i; j <= n; j++)
        {
            if(un[i - 1] == i - 1 and un[n] - un[j] == n - j)
            {
                ans = min(ans, j - i + 1);
                cout << i << ' ' << j << ' ' << ans << '\n';
            }
        }
    //if(ans == n * n) ans = 0;
    cout << ans << '\n';

    return 0;
}
