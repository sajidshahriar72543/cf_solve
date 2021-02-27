#include<bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;

int main()
{
    ll q, n, x, y,i, j;
    string m;
    cin >> q;
    vector <ll> vx, vy;

    while(q--)
    {
        cin >> n >> m;

        bool x = 0, y = 0;

        for(i = 0; i < n; i++) {
            if(m[i] == '0') {
                vx.pb(0);
                vy.pb(0);
            }

            else if(m[i] == '1') {
                if(x == 0) {
                    vx.pb(1);
                    vy.pb(0);
                    x = 1;
                }
                else {
                    vx.pb(0);
                    vy.pb(1);
                }
            }

            else {
                if(x == 1) {
                    vx.pb(0);
                    vy.pb(2);
                }
                else {
                    vx.pb(1);
                    vy.pb(1);
                }
            }
        }

        for(i = 0; i < n; i++)
            cout << vx[i];
        cout << '\n';

        for(i = 0; i < n; i++)
            cout << vy[i];
        cout << '\n';

        vx.clear(); vy.clear();

    }

    return 0;
}

