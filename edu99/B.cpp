#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define lop(b) for(int i = 0; i < b; i++)
#define loop(j, a, b) for(ll j = a; j < b; j++)
#define yes cout << "yes\n"
#define no cout << "no\n"

const int N = 5e4;
ll lnt[N];

void calc()
{
    loop(i, 1, N)
    lnt[i] = lnt[i - 1] + i;
}

int main()
{
    // ios_base::sync_with_stdio(0);
    // cin.tie(0);
    // cout.tie(0);

    calc();

    //freopen("input.txt", "r", stdin)

    int test;

    cin >> test;

    while (test--)
    {
        ll x;
        cin >> x;

        ll ans = 0;
        ll it = lower_bound(lnt, lnt + N, x) - lnt;
        ans = it;
        if (lnt[it] - x == 1)
            ans += 1;

        cout << ans << '\n';
    }

    return 0;
}

/*1 - 1 -> 1
2 - 3 -> 1, 3, 2
3 - 2 -> 1, 3
4 - 3 -> -1, 1, 4
5 - 4 -> 1, 3, 6, 5
6 - 3 -> 1, 3, 6
7 - 4 -> 1, 0, 3, 7
8 - 4 -> -1, 1, 4, 8
9 - 5 -> 1, 3, 6, 10, 9
10- 4 -> 1, 3, 6, 10
11- 5 -> 1, 3, 2, 6, 11
12- 5 -> 1, 0, 3, 7, 12
13- 5 -> -1, 1, 4, 8, 13
14-*/