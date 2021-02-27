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
    int n;
    string s;
    cin >> n >> s;

    if (s[0] == '2')
    {
        if (s[1] == '0')
        {
            if (s[2] == '2')
            {
                if (s[3] == '0')
                    yes;
                else
                {
                    if (s[n - 1] == '0')
                        yes;
                    else
                        no;
                }
            }
            else
            {
                if (s[n - 2] == '2' and s[n - 1] == '0')
                    yes;
                else
                    no;
            }
        }
        else
        {
            if (s.substr(n - 3, 3) == "020")
                yes;
            else
                no;
        }
    }
    else
    {
        if (s.substr(n - 4, 4) == "2020")
            yes;
        else
            no;
    }

    return;
}