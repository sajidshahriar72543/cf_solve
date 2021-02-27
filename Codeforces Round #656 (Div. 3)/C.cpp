#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define lop(a, b) for(int i = a; i < b; i++)
#define lopj(a, b) for(int j = a; j < b; j++)
#define lopr(a, b) for(int i = a - 1; i >= b; i--)

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, test;

    cin >> test;

    while(test--)
    {
        cin >> n;

        int a[n];

        lop(0, n) cin >> a[i];

        int res = n - 1;

        lopr(n, 1)
        {
            if(a[i - 1] < a[i])
                break;
            res = i;
        }

        lopr(res, 1)
        {
            if(a[i - 1] > a[i])
                break;
            res = i;
        }

        if(res > 0) res--;

        cout << res << '\n';
    }

    return 0;
}

