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

    int x, y, test;

    cin >> test;

    while(test--)
    {
        cin >> x >> y;

        int ans;

        if(x == y)
            ans = 0;

        else if(x > y)
        {
            if((x - y) % 2)
                ans = 2;
            else
                ans = 1;
        }

        else
        {
            if((y - x) % 2)
                ans = 1;
            else
                ans = 2;
        }

        cout << ans << '\n';
    }

    return 0;
}
