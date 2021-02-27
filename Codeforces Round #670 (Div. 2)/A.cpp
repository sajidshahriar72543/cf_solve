#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define lop(b) for(int i = 0; i < b; i++)
#define loop(j, a, b) for(int j = a; j < b; j++)
#define yes cout << "yes\n"
#define no cout << "no\n"

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    //freopen("input.txt", "r", stdin)

    int x, test, n;
    string s;

    cin >> test;

    while(test--)
    {
        cin >> x;

        int a, c[102] = {0};

        lop(x) cin >> a, c[a]++;

        int ans = 0, cnt = 0;

        for(int i = 0; i < 102; i++)
        {
            if(c[i] == 0)
            {
                if(!cnt) {
                    ans = 2 * i;
                    break;
                }

                else
                    ans += i, cnt++;
            }

            else if(c[i] == 1)
                ans += i, cnt++;

            if(cnt == 2)
                break;
        }

        int ans2 = -1, ans3 = -1;
        for(int i = 0; i < 102; i++)
            if(!c[i]) {
                ans2 = i;
                break;
            }

        for(int i = 0; i < 102; i++)
        {
            if(!c[i])
                break;

            if(c[i] == 1) {
                ans2 += i;
                break;
            }
        }

        cout << max(ans, ans2) << '\n';
    }

    return 0;
}

