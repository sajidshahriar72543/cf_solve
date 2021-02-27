#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define lop(a, b) for(int i = a; i < b; i++)

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n1, n2, n0, test;

    cin >> test;

    while(test--)
    {
        cin >> n0 >> n1 >> n2;

        if(n1 == 0) {
            if(n0 != 0) {
                lop(0, n0 + 1) cout << '0';
            }

            else lop(0, n2 + 1) cout << '1';

            cout << '\n';
            continue;
        }

        string res;

        lop(0, n0 + 1) res += "0";
        lop(0, n2 + 1) res += "1";

        n1--;

        if(n1 > 0) {
            lop(0, n1) {
                if(i % 2) res += "1";
                else res += "0";
            }
        }

        cout << res << '\n';
    }

    return 0;
}

