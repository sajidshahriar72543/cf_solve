#include<bits/stdc++.h>

#define ll long long
#define pb push_back

using namespace std;

int main()
{
    ll test, x, y, a, b, aa, bb, cc, i, t;
    string s;

    cin >> test;

    while(test--)
    {
        cin >> s;

        t = s.size();

        if(s.size() <= 2) {
            cout << s << '\n';
            continue;
        }

        if(count(s.begin(), s.end(), '1') == 0 || count(s.begin(), s.end(), '0') == 0)
            cout << s << '\n';

        else
        {
            for(i = 0; i < t; i++)
                cout << "10";
            cout << '\n';
        }
    }

    return 0;
}



