#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    vector <char> vs;
    int i;

    cin >> s;

    int l = s.size(), x = 0;

    for(i = 0; i < s.size();)
    {
        if(s[i] == 'W' && s[i + 1] == 'U' && s[i + 2] == 'B')
        {
            if(vs.size() != 0 /*&& i != l - 3 */&& x == 0) {
                vs.push_back(' ');
                x = 1;
            }

            i += 3;
        }
        else
        {
            vs.push_back(s[i]);
            x = 0;

            i++;
        }
    }

    for(i = 0; i < vs.size(); i++)
        cout << vs[i];

    cout << endl;

    return 0;
}
