#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define lop(b) for(int i = 0; i < b; i++)
#define loop(j, a, b) for(int j = a; j < b; j++)
#define yes cout << "RED\n"
#define no cout << "BLUE\n"
#define eql cout << "EQUAL\n"


void solve();

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
        solve();
    }

    return 0;
}

void solve()
{
    int n;
    string a, b;
    cin >> n >> a >> b;

    // sort(a.begin(), a.end());
    // sort(b.begin(), b.end());

    int ca = 0, cb = 0;

    lop(n)
    {
        if (a[i] != b[i])
        {
            if (a[i] > b[i])
                ca += max(1, n - 1);
            else
                cb += max(1, n - 1);

            continue;
        }

        loop(j, 0, n)
        {
            if (a[j] > b[j])
                ca++;
            else if (a[j] < b[j])
                cb++;
        }

    }

    // cout << ca << ' ' << cb << ' ';
    if (ca > cb) yes;
    else if (cb > ca) no;
    else eql;

    return;
}