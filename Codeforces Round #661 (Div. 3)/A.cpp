#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define lop(a, b) for(int i = a; i < b; i++)
#define lopj(a, b) for(int j = a; j < b; j++)
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define __ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main()
{__

    int x, test, n, k;
    string s;

    cin >> test;

    while(test--)
    {
        cin >> n;

        int a[n];

        lop(0, n) cin >> a[i];

        sort(a, a + n);

        bool f = 1;

        lop(0, n - 1)
        {
            if(a[i + 1] - a[i] > 1)
                f = 0;
        }

        if(f) yes;
        else no;

    }

    return 0;
}

