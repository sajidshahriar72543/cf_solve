#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i, j, t, n, l;
    string s;
    vector <int> x;

    cin >> t;
    cin.ignore();

    while(t--)
    {
        cin >> s;
        l = s.size();
        if(l == 1) {
            if(s[0] == 'L')
                cout << 2 << endl;
            else
                cout << 1 << endl;

            continue;
        }

        int c = 0;

        for(i = 0; i < l; i++) {
                if(s[i] == 'L')
                    c++;
                else {
                    x.push_back(c);
                    c = 0;
                }
        }
        x.push_back(c);
        sort(x.begin(), x.end());

        n = x.size();

        cout << x[n - 1] + 1 << endl;

        s.clear();
        x.clear();
    }

    return 0;
}
