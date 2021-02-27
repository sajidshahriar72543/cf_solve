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
    string a, b;
    int n;
    cin >> n >> b;

    a.push_back('1');
    loop(i, 1, n)
    {
        if (b[i] == '1')
        {
            if (a[i - 1] != '1' or b[i - 1] != '1')
                a.push_back('1');
            else
                a.push_back('0');
        }
        else
        {
            if (a[i - 1] != b[i - 1])
                a.push_back('0');
            else
                a.push_back('1');
        }
    }

    cout << a << '\n';
    return;
}