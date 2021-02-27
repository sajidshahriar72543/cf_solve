#include<bits/stdc++.h>

using namespace std;

int main()
{
    string n;

    cin >> n;

    bool f = 0;
    int saiz = n.size();

    for(int i = 0; i < saiz - 1; i++)
    {
        if(n[i] == '0' and !f)
            f = 1;
        else
            cout << n[i];
    }

    if(f) cout << n[saiz - 1];
}
