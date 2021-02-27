#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define lop(a, b) for(int i = a; i < b; i++)
#define lopj(a, b) for(int j = a; j < b; j++)

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    //freopen("input.txt", "r", stdin)

    ll n, test, m, k;

    cin >> k;

    string s = "codeforces";

    n = 1;
    ll i = 1;

    int x[10];
    lop(0, 10) x[i] = 1;

    n = 1;
    m = 0;
    while(n < k)
    {
        x[m]++;
        m++;
        if(m > 9) m = 0;

        n = 1;
        lop(0, 10) n *= x[i];

        //cout << n << endl;
    }

    lop(0, 10) lopj(0, x[i]) cout << s[i];

    cout << '\n';

    return 0;
}


