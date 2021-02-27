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
    string s;
    cin >> s;
    int n = s.size();

    lop(n)
    {
        if (i & 1)
        {
            if (s[i] == 'z')
                s[i] = 'y';
            else
                s[i] = 'z';
        }
        else
        {
            if (s[i] == 'a')
                s[i] = 'b';
            else
                s[i] = 'a';
        }
    }

    cout << s << '\n';
    return;
}