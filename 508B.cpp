#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    vector <int> ev;

    cin >> s;
    int ss = s.size() - 1;

    for(int i = 0; i <= ss; i++)
    {
        int x = s[i] - '0';

        if(!(x & 1))
            ev.push_back(i);
    }

    int n = ev.size();
    if(n == 0)
    {
        cout << -1 << '\n';
        return 0;
    }

    int m = ev[0];

    for(int i = 0; i < n; i++)
    {
        char x = s[ev[i]];
        //cout << x << s[ss] << endl;


        if(x < s[ss])
        {
            swap(s[ev[i]], s[ss]);
            break;
        }
        else
        {
             m = ev[i];
        }

    }


    int x = s[ss] - '0';
    if(x & 1) swap(s[m], s[ss]);;
    cout << s << '\n';

    return 0;
}
