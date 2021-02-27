#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define lop(b) for(int i = 0; i < b; i++)
#define loop(j, a, b) for(int j = a; j < b; j++)
#define yes cout << "yes\n"
#define no cout << "no\n"

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    //freopen("input.txt", "r", stdin)

    ll x, y, k, test;

    cin >> test;

    while(test--)
    {
        cin >> x >> y >> k;

        ll need = k + (y * k), trd = 0, have = 1;

        while(need > x) {
            trd += need / x;
            need = (need % x) + (need / x);

//            cout << need << ' ' << trd << '\n';
        }

        trd += k + 1;

        cout << trd << '\n';
    }

    return 0;
}

