#include<bits/stdc++.h>

using namespace std;

#define yes cout << "yes\n"
#define no cout << "no\n"

string res = "abacaba";

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int test, n, k;
    string s;

    cin >> test;

    while(test--)
    {
        cin >> n >> s;

        int c = 0, p = 0;
        bool f, ff;

        for(int i = 0; i < n - 6; i++)
            if(s.substr(i, 7) == res)
                c++;

        if(c > 1)
        {
            no;
            continue;
        }

        if(c == 1)
        {
            yes;
            for(int i = 0; i < n; i++)
            if(s[i] == '?')
                s[i] = 'x';

            cout << s << '\n';

            continue;
        }

        for(int i = 0; i < n - 6; i++)
        {
            f = 1, ff = 0;
            int k;
            string ss = s;

            for(int j = 0; j < 7; j++)
            {
                k = i + j;

                if(ss[k] == '?' and f)
                    ss[k] = res[j];

                if(ss[k] != res[j])
                    f = 0;
            }

            if(f)
            {
                p = 0;

                for(int j = 0; j < n - 6; j++)
                    if(ss.substr(j, 7) == res)
                        p++;

                if(p == 1)
                {
                    ff = 1;

                    yes;
                    for(int j = 0; j < n; j++)
                    if(ss[j] == '?')
                        ss[j] = 'x';

                    cout << ss << '\n';
                }
            }

            if(ff)
                break;
        }

        if(!ff)
            no;
    }

    return 0;
}

