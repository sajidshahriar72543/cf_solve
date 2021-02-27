#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t, n, i, j, inp;
    vector <int> a;

    cin >> t;

    while(t--)
    {
        cin >> n;
        for(i = 0; i < n; i++) {
            cin >> inp;
            a.push_back(inp);
        }

        if(n == 1) {
            cout << "YES\n";
            continue;
        }
        int f = 0;
        sort(a.begin(), a.end());
        for(i = 0; i < n - 1; i++) {
            int d = a[n - 1] - a[i];
            if(d != 0 && d % 2 != 0) {
                cout << "NO\n";
                f = 1;
                break;
            }
        }
        if(f == 0)
            cout << "YES\n";

        a.clear();
    }

    return 0;
}
