#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define lop(b) for(int i = 0; i < b; i++)
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
    string a, b;
    int n;

    cin >> n >> b;
    int k = 0;
    lop(n)
    {
        if (b[i] == 'b')
            k++;
    }

    lop(k)
    a.push_back('b');

    lop(n)
    {
        if (b[i] != 'b')
            a.push_back(b[i]);
    }

    cout << a << '\n';
}