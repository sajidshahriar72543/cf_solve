#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define lop(b) for(int i = 1; i <= b; i++)
#define loop(j, a, b) for(int j = a; j < b; j++)
#define yes cout << "yes\n"
#define no cout << "no\n"

void solve();

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    //freopen("input.txt", "r", stdin)

    int test = 1;

    cin >> test;

    while (test--)
    {
        solve();
    }

    return 0;
}

void solve()
{
    int n;
    cin >> n;

    int a[n + 1], pos[n + 1];
    bool taken[n + 1] = {0};

    lop(n)
    {
        cin >> a[i];
        pos[a[i]] = i;
    }

    int last = n + 1;
    for (int i = n; i ; i--)
    {
        if (!taken[i])
        {
            for (int j = pos[i]; j < last; j++)
            {
                cout << a[j] << ' ';
                taken[a[j]] = 1;
            }
            last = pos[i];
        }
    }

    cout << '\n';

    return;
}