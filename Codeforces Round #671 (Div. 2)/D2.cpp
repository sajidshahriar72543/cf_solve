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

    int x, test;

    cin >> x;

    int a[x];

    lop(x) cin >> a[i];

    sort(a, a + x);

    int b[x], p = 0;

    for(int i = 1; i < x; i += 2)
        b[i] = a[p++];
    for(int i = 0; i < x; i += 2)
        b[i] = a[p++];

    int ans = 0;
    loop(i, 1, x - 1) if(b[i] < b[i - 1] and b[i] < b[i + 1]) ans++;

    cout << ans << endl;
    lop(x) cout << b[i] << ' ';

    return 0;
}


