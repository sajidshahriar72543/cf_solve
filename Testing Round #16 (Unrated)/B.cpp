#include <bits/stdc++.h>

#define ll long long

using namespace std;

int main ()
{
    ll t, a1, b1, a2, b2;
    ll ar[4];

    cin >> t;

    while(t--)
    {
        cin >> ar[0] >> ar[1] >> ar[2] >> ar[3];

        a1 = max(ar[0], ar[1]);
        b1 = min(ar[0], ar[1]);
        a2 = max(ar[2], ar[3]);
        b2 = min(ar[2], ar[3]);

//        if(a1 == b1 && b1 == a2 && a2 == b2) {
//            cout << "Yes\n";
//            continue;
//        }

        if(b1 + b2 == a1 && a1 == a2){
            cout << "Yes\n";
            continue;
        }


        cout << "No\n";
    }

    return 0;
}

