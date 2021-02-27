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
    int p[n];
    lop(n) p[i] = i;

    do
    {
        string aa, bb;
        lop(n) aa.push_back(a[p[i]]), bb.push_back(b[p[i]]);
        // cout << aa << ' ' << bb << '\t';
        stringstream s1(aa), s2(bb);
        int x, y;
        s1 >> x; s2 >> y;
        // cout << x << ' ' << y << '\n';


        if (x > y) ca++;
        else if (x < y) cb++;
    }
    while (next_permutation(p, p + n));

    // cout << ca << ' ' << cb << ' ';
    if (ca > cb) yes;
    else if (cb > ca) no;
    else eql;

    return;
}