#include <bits/stdc++.h>

using namespace std;

int main()
{
    string a, b;
    //int i, j;

    cin >> a >> b;

    for(int i = 0, j = b.size() - 1; i < a.size(); i++, j--) {
        if(a[i] == b [j]) continue;
        else {
            cout << "NO\n";
            return 0;
        }
    }

    cout << "YES\n";
    return 0;
}
