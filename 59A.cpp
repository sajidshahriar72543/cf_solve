#include<bits/stdc++.h>

using namespace std;

void upper(string s)
{
    int l = s.size();

    for(int i = 0; i < l; i++)
    {
        if(s[i] >= 'a' && s[i] <= 'z')
            s[i] = s[i] - 32;

        cout << s[i];
    }

    cout << '\n';
}

void lower(string s)
{
    int l = s.size();

    for(int i = 0; i < l; i++)
    {
        if(s[i] >= 'A' && s[i] <= 'Z')
            s[i] = s[i] + 32;

        cout << s[i];
    }

    cout << '\n';
}

int main()
{
    string s;

    cin >> s;

    int l = s.size();
    int up = 0, lo = 0;

    for(int i = 0; i < l; i++)
    {
        if(s[i] >= 'a' && s[i] <= 'z')
            lo++;
        if(s[i] >= 'A' && s[i] <= 'Z')
            up++;
    }

    if(up > lo)
        upper(s);
    else
        lower(s);

    return 0;
}
