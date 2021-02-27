#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define lop(b) for(int i = 0; i < b; i++)
#define loop(j, a, b) for(int j = a; j < b; j++)
#define yes cout << "yes\n"
#define no cout << "no\n"

const int N = 1e5 + 3, inf = 1 << 28;
int ar[N];

void solve(int n);
void solve2(int n);

int ask(int i)
{
    cout << "? " << i << endl;
    int x;
    cin >> x;
    return x;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    //freopen("input.txt", "r", stdin)


    int n;
    cin >> n;

    if (n > 100)
        solve(n);
    else
        solve2(n);

    return 0;
}

void solve2(int n)
{
    ar[0] = ar[n + 1] = inf;

    lop(n) ar[i + 1] = ask(i + 1);

    loop(i, 1, n + 1)
    {
        if (ar[i] < ar[i - 1] and ar[i] < ar[i + 1])
        {
            cout << "! " << i << endl;
            return;
        }
    }
}

void solve(int n)
{
    int lo = 1, hi = n, mid;
    while (1)
    {
        if (lo == hi)
        {
            cout << "! " << lo << endl;
            return ;
        }

        mid = (lo + hi) / 2;

        int a = ask(mid), b = ask(mid + 1);

        if (a < b)
            hi = mid;
        else
            lo = mid + 1;
    }
}