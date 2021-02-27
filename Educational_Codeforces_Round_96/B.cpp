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

    int n, k, test;

    cin >> test;

    while(test--)
    {
        cin >> n >> k;

        ll a[n];

        lop(n)
        cin >> a[i];

        sort(a, a + n);

        /*if(count(a, a + n, 0LL) > 1)
        {
            cout << 0 << '\n';
            continue;
        }*/

        for(int i = n - 2; i >= 0 and k; i--, k--)
        {
            /*if(k > 1)
            {
                if(a[i] > 1)
                    a[n - 1] += a[i] - 1, a[i] = 1;
            }
            else*/
                a[n - 1] += a[i], a[i] = 0;
        }

        cout << a[n - 1] - *min_element(a, a + n) << '\n';
    }

    return 0;
}
