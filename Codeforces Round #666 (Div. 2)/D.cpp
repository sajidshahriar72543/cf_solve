#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define lop(a, b) for(int i = a; i < b; i++)
#define lopj(a, b) for(int j = a; j < b; j++)
#define yes cout << "HL\n"
#define no cout << "T\n"

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    //freopen("input.txt", "r", stdin)

    int x, test;

    cin >> test;

    while(test--)
    {
        int n;

        cin >> n;

        ll a[n];
        ll s = 0, m = 0;

        lop(0, n) cin >> a[i], s += a[i], m = max(m, a[i]);

        if(m <= s / 2 and s % 2 == 0) yes;
        else no;
    }

    return 0;
}

