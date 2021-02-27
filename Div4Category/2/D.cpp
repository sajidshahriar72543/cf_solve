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

    int n;
    cin >> n;

    ll b[n / 2], a[n];
    lop(n / 2) cin >> b[i];

    a[0] = 0, a[n - 1] = b[0];
    int j = n - 2;

    loop(i, 1, n / 2)
    {
        if (b[i] - a[i - 1] <= a[j + 1])
        {
            a[i] = a[i - 1];
            a[j] = b[i] - a[i];
        }

        else
        {
            a[j] = a[j + 1];
            a[i] = b[i] - a[j];
        }

        j--;
    }

    lop(n) cout << a[i] << ' ';

    return 0;
}
