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

    int x, test;

    cin >> test;

    while (test--)
    {
        int x, y;
        cin >> x >> y;

        if(x > y) swap(x, y);
        int ans = x + x + (2 * (y - x)) - (x != y);

        cout << ans << '\n';
    }

    return 0;
}

