#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define lop(b) for(int i = 0; i < b; i++)
#define loop(j, a, b) for(int j = a; j < b; j++)
#define yes cout << "yes\n"
#define no cout << "no\n"

ll a[102][102], aa[3], n, m;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int test;

    cin >> test;

    while(test--)
    {
        cin >> n >> m;

        lop(n) loop(j, 0, m) cin >> a[i][j];

        ll mv = 0;

        lop(n) loop(j, 0, m)
        {
            aa[0] = a[i][j];
            aa[1] = a[i][m - j - 1];
            aa[2] = a[n - i - 1][j];

            sort(aa, aa + 3);
            mv += aa[2] - aa[1] + aa[1] - aa[0];
            a[i][j] = a[i][m - j - 1] = a[n - i - 1][j] = aa[1];
        }

//        lop(n)
//        {
//            loop(j, 0, m) cout << a[i][j] << ' ';
//            cout << endl;
//        }

        cout << mv << '\n';
    }

    return 0;
}

