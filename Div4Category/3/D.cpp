#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define lop(b) for(int i = 0; i < b; i++)
#define loop(j, a, b) for(int j = a; j < b; j++)
#define yes cout << "YES\n"
#define no cout << "NO\n"

const int N = 1e5 + 5;
int cnt[N], n, a, b;
string state;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, k;
    cin >> n >> k;

    // if (k > ((n * n) + 1) / 2)
    // {
    //     no;
    //     return 0;
    // }

    //yes;
    int is = 0, f = 1;
    char s[n][n];

    lop(n)
    {
        loop(j, 0, n)
        {
            if (is < k and (i + j) % 2 == 0)
            {
                s[i][j] = 'L';
                is++;
            }
            else
                s[i][j] = 'S';
        }
        //cout << '\n';
    }

    if (is != k) no;
    else
    {
        yes;
        lop(n) {
            loop(j, 0, n) cout << s[i][j];
            cout << '\n';
        }
    }

    return 0;
}