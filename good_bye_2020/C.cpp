#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define lop(b) for(int i = 0; i < b; i++)
#define loop(j, a, b) for(int j = a; j < b; j++)
#define yes cout << "yes\n"
#define no cout << "no\n"

int solve()
{
    string s;
    cin >> s;
    int n = s.size(), ans = 0;

    lop(n - 1)
    {
        if (s[i] == s[i + 1])
        {
            ans++;
            // cout << "double " << i << '\n';

            if (i < n - 2 and s[i] == s[i + 2])
            {
                ans++;
                // cout << "double++\n";
                i++;
            }
            i++;
        }
        else if (i < n - 2 and s[i] == s[i + 2])
        {
            ans++;
            // cout << "triple " << i << '\n';
            if (i < n - 3 and s[i + 1] == s[i + 3])
            {
                ans++;
                // cout << "triple++\n";
                i++;
            }
            i += 2;
        }
    }

    return ans;
}

int main()
{
    // ios_base::sync_with_stdio(0);
    // cin.tie(0);
    // cout.tie(0);

    //freopen("input.txt", "r", stdin)

    int x, test;

    cin >> test;

    while (test--)
    {
        cout << solve() << '\n';
    }

    return 0;
}