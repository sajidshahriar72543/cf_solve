#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define lop(a, b) for(int i = a; i < b; i++)
#define lopj(a, b) for(int j = a; j < b; j++)
#define yes cout << "yes\n"
#define no cout << "no\n"

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    //freopen("input.txt", "r", stdin)

    ll x, test;

    cin >> test;

    while(test--)
    {
        cin >> x;

        int c = 0, p = 0;

        while(x > 1)
        {
            if(x < 6) {
                if(x * 2 != 6)
                    break;
            }

            if(c > 1)
                break;

            p++;

            if(x % 6 == 0) {
                x /= 6;
                c = 0;
            }

            else {
                x *= 2;
                c++;
            }
        }

        cout << (x == 1 ? p : -1) << '\n';
    }

    return 0;
}

