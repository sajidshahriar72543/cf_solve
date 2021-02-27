#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define lop(b) for(int i = 0; i < b; i++)
#define loop(j, a, b) for(int j = a; j < b; j++)
#define yes cout << "yes\n"
#define no cout << "no\n"

int n;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> n;

    int a[n];

    lop(n)
        cin >> a[i], a[i]--;

    sort(a, a + n);

    ll m = 0;

    for(int i = 0; i < n; i++)
        m += abs(a[i] - i);

    cout << m << '\n';

    return 0;
}

