#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    set <char> S;

    getline(cin, s);

    for(int i = 0; i < s.size(); i++)
        if(s[i] >= 'a' && s[i] <= 'z')
            S.insert(s[i]);

    cout << S.size() << '\n';

    return 0;
}
