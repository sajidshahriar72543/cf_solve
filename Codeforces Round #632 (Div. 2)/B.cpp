#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t, n, i, j, k, fp, fn;
    vector <ll> a, b;

    cin >> t;

    while(t--)
    {
        cin >> n;

        bool flag = true, fpp = false, fnn = false;
        for(i = 0; i < n; i++) {
            cin >> k;
            a.push_back(k);
            if(k > 0 && fpp == false) {
                fp = i;
                fpp = true;
            }
            if(k < 0 && fnn == false) {
                fn = i;
                fnn = true;
            }
        }

        if(fpp == false)
            fp = n + 5;
        if(fnn == false)
            fn = n + 5;

        for(i = 0; i < n; i++) {
            cin >> k;
            b.push_back(k);
        }

        for(i = 0; i < n; i++) {
            if(a[i] < b[i] && fp >= i) {
                flag = false;
                break;
            }
            else if(a[i] > b[i] && fn >= i) {
                flag = false;
                break;
            }
        }

        if(flag == true)
            cout << "YES\n";
        else
            cout << "NO\n";

        a.clear();
        b.clear();
    }

    return 0;
}
