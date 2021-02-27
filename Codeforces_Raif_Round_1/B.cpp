#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define lop(b) for(int i = 0; i < b; i++)
#define loop(j, a, b) for(int j = a; j < b; j++)
#define yes cout << "yes\n"
#define no cout << "no\n"

int main()
{
    int x, n, test;
    string s;

    cin >> test;

    while(test--)
    {
        cin >> n >> s;

        int c, cc, o, p;
        c = cc = o = p = 0;

        lop(n)
        {
            if(s[i] == '-' and s[(i + 1) % n] != '-')
            {
                p++;
            }
        }

        lop(n)
        {
            c += (s[i] == '>');
            cc += (s[i] == '<');
            o += (s[i] == '-');
        }

        //cout << c << ' ' << cc << ' ' << o << ' ';

        if(c + o == n or cc + o == n)
            x = n;
        else
            x = o + p;

        cout << x << '\n';
    }

    return 0;
}
