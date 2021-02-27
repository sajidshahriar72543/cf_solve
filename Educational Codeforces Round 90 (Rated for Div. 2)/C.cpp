#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define lop(a, b) for(int i = a; i < b; i++)
#define lopj(a, b) for(int j = a; j < b; j++)

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    //freopen("input.txt", "r", stdin)

    int x, test;
    string s;

    cin >> test;

    while(test--)
    {
        cin >> s;
        x = s.size();

        ll res = 0, cur = 0, c = 0;

        lop(0, x)
        {
            if(s[i] == '+')
                c++;
            else
                c--;

            if(c < cur)
            {
                cur = c;
                res += i + 1;
            }
        }

        cout << res + x << '\n';

    }

    return 0;
}


