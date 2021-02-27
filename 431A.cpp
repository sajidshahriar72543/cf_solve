#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a[5];

    for(int i = 1; i < 5; i++)
        cin >> a[i];

    int w = 0;

    string s;
    cin >> s;

    for(int i = 0; i < s.size(); i++)
        w += a[s[i] - '0'];

    cout << w;

    return 0;
}
