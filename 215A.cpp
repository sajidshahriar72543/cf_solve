#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define lop(b) for(int i = 0; i < b; i++)
#define lopj(b) for(int j = 0; j < b; j++)
#define N 10009

int cnt[N];

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, m;

    cin >> n;
    int a[n];
    lop(n) cin >> a[i];

    cin >> m;
    int b[m];
    lop(m) cin >> b[i];

    int pp = 0;

    lop(n) lopj(m)
        if(b[j] % a[i] == 0) {
                cnt[b[j] / a[i]]++;
                pp = max(pp, b[j] / a[i]);
        }

    cout << cnt[pp];

    return 0;
}

