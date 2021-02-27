#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s;

    cin >> s;

    int k = s[6] - '0';

    if(k % 2 == 0)
        cout << 0 << endl;
    else
        cout << 1 << endl;

    return 0;
}

