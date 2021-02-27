#include<bits/stdc++.h>

using namespace std;

string s;
vector <set <int> > character(26);

void query1(int pos, char c)
{
    pos--;
    character[s[pos] - 'a'].erase(pos);
    s[pos] = c;
    character[c - 'a'].insert(pos);
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> s;

    int x = s.size();

    for(int i = 0; i < x; i++)
        character[s[i] - 'a'].insert(i);

    int q, l, r, qt, pos, res;
    char c;

    cin >> q;

    while(q--)
    {
        cin >> qt;

        if(qt == 1)
        {
             cin >> pos >> c;
             query1(pos, c);
        }

        else
        {
            cin >> l >> r;

            res = 0;
            for(int i = 0; i < 26; i++)
            {
                auto it = character[i].lower_bound(l - 1);

                if(it != character[i].end() and *it < r)
                    res++;
            }

            cout << res << '\n';
        }
    }

    return 0;
}
