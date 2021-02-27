#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define lop(b) for(int i = 0; i < b; i++)
#define loop(j, a, b) for(int j = a; j < b; j++)
#define yes cout << "yes\n"
#define no cout << "no\n"

const int N = 3e4 + 4;
int a[N], n;

bool increase()
{
    int pre = a[1], suf = 0;

    loop(i, 1, n)
    {

    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    //freopen("input.txt", "r", stdin)

    int x, test;

    cin >> test;

    while (test--)
    {
        cin >> n;
        loop(i, 0, n) cin >> a[i];

        if (increase() or decrease())
            yes;
        else
            no;
    }

    return 0;
}
