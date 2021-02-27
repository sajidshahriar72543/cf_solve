#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define lop(b) for(int i = 0; i < b; i++)
#define loop(j, a, b) for(int j = a; j < b; j++)
#define yes cout << "yes\n"
#define no cout << "no\n"

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
        string s;
        cin >> s;
        int n = s.size(), b1s = 0, b1e = 0, b2s = 0, b2e = 0;
        int ans = 0;

        lop(n)
        {
            if(s[i] == '(')
                b1s++;
            if(s[i] == '[')
                b2s++;
            if(s[i] == ')')
            {
                if(b1s) ans++, b1s--;
            }
            if(s[i] == ']')
            {
                if(b2s) ans++, b2s--;
            }
        }
        cout << ans << '\n';
    }

    return 0;
}

