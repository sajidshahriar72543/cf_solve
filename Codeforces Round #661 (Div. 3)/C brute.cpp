#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define lop(a, b) for(int i = a; i < b; i++)
#define lopj(a, b) for(int j = a; j < b; j++)
#define yes cout << "yes\n"
#define no cout << "no\n"

int cnt[101];
bool vis[101];

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int x, test, n;

    cin >> test;

    while(test--)
    {
        cin >> n;

        int a[n];

        lop(0, n) cin >> a[i];

        for(int z = 2; z < 101; z++)
        {
            memset(vis, 0, sizeof(vis));
            for(int k = 0; k < n; k++)
            {
                if(vis[k])
                    continue;

                for(int l = k + 1; l < n; l++)
                {
                    if(!vis[l])
                    {
                        int xx = a[k] + a[l];

                        if(xx == z)
                        {
                            cnt[z]++;
                            vis[l] = 1;
                            vis[k] = 1;
                            break;
                        }
                    }
                }
            }
        }

        int res = 0;

        lop(2, 101) res = max(res, cnt[i]);

        cout << res << '\n';

        memset(cnt, 0, sizeof(cnt));
        memset(vis, 0, sizeof(vis));
    }

    return 0;
}


